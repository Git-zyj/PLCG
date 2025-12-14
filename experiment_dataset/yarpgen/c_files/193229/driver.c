#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14452450246893880789ULL;
unsigned int var_4 = 3487618447U;
unsigned char var_6 = (unsigned char)56;
int var_7 = 381265504;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 3625587282U;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4285699661262932790LL;
void init() {
}

void checksum() {
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
