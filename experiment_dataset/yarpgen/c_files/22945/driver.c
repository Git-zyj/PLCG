#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4002309278U;
unsigned short var_9 = (unsigned short)17903;
unsigned int var_17 = 3491828921U;
long long int var_18 = -8149806328332044766LL;
int zero = 0;
unsigned int var_19 = 329632068U;
unsigned char var_20 = (unsigned char)133;
unsigned int var_21 = 111685524U;
unsigned long long int var_22 = 14935761536958597209ULL;
unsigned int var_23 = 3802219515U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
