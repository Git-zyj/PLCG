#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -966202911;
unsigned long long int var_2 = 10119514049754844588ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -7067294558574224027LL;
long long int var_11 = 5435157308782839117LL;
long long int var_12 = 3480833819272840268LL;
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
