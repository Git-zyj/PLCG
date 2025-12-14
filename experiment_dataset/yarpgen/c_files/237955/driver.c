#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2870045497369700957LL;
unsigned short var_2 = (unsigned short)19756;
unsigned char var_4 = (unsigned char)24;
short var_5 = (short)-19244;
unsigned long long int var_8 = 8071347939373020265ULL;
unsigned long long int var_9 = 17031891949026457289ULL;
int zero = 0;
unsigned long long int var_14 = 4053108934170055009ULL;
long long int var_15 = -1497793478651680424LL;
long long int var_16 = -3865437556478423304LL;
unsigned long long int var_17 = 4581976555025446747ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
