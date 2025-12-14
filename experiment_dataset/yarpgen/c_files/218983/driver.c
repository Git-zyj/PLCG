#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1705245323U;
_Bool var_3 = (_Bool)0;
int var_4 = -1484632021;
int var_5 = -1305461978;
signed char var_6 = (signed char)79;
int zero = 0;
unsigned char var_10 = (unsigned char)157;
unsigned int var_11 = 484135598U;
unsigned int var_12 = 3903527193U;
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
