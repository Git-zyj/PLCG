#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38915;
long long int var_3 = -4357208239344020989LL;
int var_8 = 1382174985;
unsigned long long int var_9 = 5287993874551572711ULL;
int zero = 0;
unsigned int var_10 = 2523349490U;
unsigned int var_11 = 104737674U;
unsigned short var_12 = (unsigned short)36761;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
