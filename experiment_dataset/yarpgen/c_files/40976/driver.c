#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 1808671290150623527ULL;
unsigned char var_9 = (unsigned char)169;
int zero = 0;
signed char var_10 = (signed char)1;
signed char var_11 = (signed char)62;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)78;
int var_14 = -627288907;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
