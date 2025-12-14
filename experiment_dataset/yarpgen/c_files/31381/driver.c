#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4045899062U;
signed char var_5 = (signed char)-58;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1241631052U;
int zero = 0;
int var_10 = 780498300;
unsigned long long int var_11 = 6853429105262756582ULL;
int var_12 = -825999227;
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
