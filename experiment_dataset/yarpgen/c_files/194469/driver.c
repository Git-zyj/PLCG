#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4368516808799023406LL;
long long int var_6 = 3183746155173090564LL;
long long int var_11 = -8471496887132419532LL;
unsigned short var_12 = (unsigned short)37061;
int zero = 0;
unsigned short var_15 = (unsigned short)54160;
long long int var_16 = 3241060153636168413LL;
unsigned short var_17 = (unsigned short)50600;
long long int var_18 = -4426254442315280215LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
