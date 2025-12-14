#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7378746595977201268ULL;
int var_6 = -350566318;
int zero = 0;
unsigned short var_20 = (unsigned short)26639;
short var_21 = (short)22118;
unsigned long long int var_22 = 8373698690022315737ULL;
short var_23 = (short)25327;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
