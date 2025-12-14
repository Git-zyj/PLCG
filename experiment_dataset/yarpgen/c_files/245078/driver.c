#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3372374834U;
unsigned char var_1 = (unsigned char)213;
signed char var_13 = (signed char)114;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = -8349371725150385773LL;
long long int var_19 = -3492620956890753874LL;
long long int var_20 = -5021496334355649102LL;
long long int var_21 = 704895320626643807LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
