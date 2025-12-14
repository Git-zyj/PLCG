#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3066858959U;
unsigned long long int var_1 = 17705268576168798887ULL;
unsigned int var_2 = 3276844814U;
unsigned char var_4 = (unsigned char)60;
short var_5 = (short)-4750;
signed char var_6 = (signed char)7;
short var_7 = (short)-32634;
unsigned long long int var_8 = 2427176930726297024ULL;
short var_9 = (short)10307;
long long int var_10 = 1823807079560897630LL;
int zero = 0;
unsigned char var_13 = (unsigned char)100;
long long int var_14 = -7901881290915844317LL;
long long int var_15 = 7157768968507036924LL;
unsigned int var_16 = 1116479737U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
