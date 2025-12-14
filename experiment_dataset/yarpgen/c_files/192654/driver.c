#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5461346039658516887ULL;
long long int var_7 = -4194807894830322265LL;
signed char var_8 = (signed char)-76;
unsigned char var_9 = (unsigned char)79;
unsigned int var_14 = 1353444148U;
int zero = 0;
short var_15 = (short)-31788;
unsigned char var_16 = (unsigned char)173;
unsigned char var_17 = (unsigned char)122;
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
