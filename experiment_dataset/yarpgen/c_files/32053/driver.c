#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1973927621;
unsigned char var_2 = (unsigned char)44;
long long int var_6 = 2290673978890073766LL;
short var_16 = (short)-24512;
int zero = 0;
int var_20 = -1206802530;
int var_21 = 536636760;
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
