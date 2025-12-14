#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1575235566;
short var_5 = (short)-8022;
int var_7 = 1672953312;
unsigned int var_8 = 1417726338U;
unsigned char var_9 = (unsigned char)84;
int var_12 = -970798392;
int zero = 0;
unsigned int var_13 = 2906479284U;
unsigned long long int var_14 = 18056917880666958683ULL;
unsigned int var_15 = 1925783845U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
