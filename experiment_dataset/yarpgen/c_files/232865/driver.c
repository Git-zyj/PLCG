#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3813811794U;
unsigned int var_9 = 5499199U;
unsigned short var_12 = (unsigned short)2311;
long long int var_14 = -7566433770079499389LL;
short var_16 = (short)22536;
int var_17 = -84133320;
short var_19 = (short)-12314;
int zero = 0;
long long int var_20 = -7515155944832175118LL;
unsigned long long int var_21 = 17238143623960312091ULL;
unsigned short var_22 = (unsigned short)43107;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
