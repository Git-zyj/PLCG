#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)109;
unsigned char var_5 = (unsigned char)195;
int var_8 = -1577316157;
unsigned long long int var_11 = 17949957929444139484ULL;
unsigned long long int var_13 = 437238036960612227ULL;
int zero = 0;
unsigned long long int var_15 = 17890476081968040353ULL;
unsigned char var_16 = (unsigned char)79;
void init() {
}

void checksum() {
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
