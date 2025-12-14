#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1813;
unsigned char var_9 = (unsigned char)233;
unsigned int var_10 = 235351932U;
unsigned int var_11 = 1743646782U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_18 = 7854270139953882525ULL;
short var_19 = (short)25854;
int zero = 0;
signed char var_20 = (signed char)100;
int var_21 = -350194271;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
