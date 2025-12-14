#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 73498108;
unsigned short var_2 = (unsigned short)22728;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-22277;
signed char var_7 = (signed char)90;
unsigned char var_8 = (unsigned char)68;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)13125;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 275838935423920706LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
