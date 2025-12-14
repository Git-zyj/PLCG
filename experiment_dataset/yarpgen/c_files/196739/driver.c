#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
unsigned long long int var_1 = 283099234482320604ULL;
int var_7 = -280962669;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)234;
int zero = 0;
int var_13 = 1190900390;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
