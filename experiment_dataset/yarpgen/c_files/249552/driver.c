#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_13 = -756239999378529341LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_19 = -1162469001;
unsigned char var_20 = (unsigned char)122;
long long int var_21 = 6174133586337973571LL;
unsigned int var_22 = 2105738427U;
_Bool var_23 = (_Bool)1;
long long int var_24 = -7342164065931543209LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
