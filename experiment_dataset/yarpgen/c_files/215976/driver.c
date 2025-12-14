#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3097675328U;
signed char var_5 = (signed char)109;
unsigned int var_7 = 381420762U;
unsigned int var_8 = 311086703U;
int zero = 0;
unsigned char var_10 = (unsigned char)167;
unsigned int var_11 = 1715070375U;
short var_12 = (short)8351;
short var_13 = (short)-5821;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
