#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4015671012U;
unsigned int var_4 = 1930508061U;
unsigned int var_5 = 1629381814U;
unsigned int var_13 = 445146384U;
int zero = 0;
unsigned int var_20 = 3816349249U;
unsigned int var_21 = 3523450503U;
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
