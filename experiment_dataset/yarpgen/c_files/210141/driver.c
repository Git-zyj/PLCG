#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
unsigned int var_3 = 35161403U;
short var_8 = (short)-21916;
short var_9 = (short)-4422;
int var_10 = -265238266;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)252;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-24772;
long long int var_19 = -2159936693846570512LL;
unsigned short var_20 = (unsigned short)60864;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
