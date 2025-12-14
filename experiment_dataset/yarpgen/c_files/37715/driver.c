#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7336445316817145779LL;
unsigned short var_5 = (unsigned short)60841;
int var_6 = 1960215189;
unsigned int var_7 = 2899666178U;
signed char var_9 = (signed char)108;
int var_10 = -1951267575;
short var_12 = (short)-7129;
int var_13 = -1648247504;
int zero = 0;
unsigned char var_15 = (unsigned char)35;
short var_16 = (short)22101;
int var_17 = -1656948245;
void init() {
}

void checksum() {
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
