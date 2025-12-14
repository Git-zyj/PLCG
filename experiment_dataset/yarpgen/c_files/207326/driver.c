#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)196;
_Bool var_3 = (_Bool)0;
long long int var_4 = -899708467107189843LL;
int var_5 = -1234606979;
int var_8 = -1389527538;
int zero = 0;
unsigned long long int var_11 = 228855876403962197ULL;
long long int var_12 = 3738210586768407933LL;
void init() {
}

void checksum() {
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
