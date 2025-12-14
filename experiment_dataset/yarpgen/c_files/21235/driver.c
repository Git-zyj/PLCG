#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -3560949299759804504LL;
unsigned short var_9 = (unsigned short)49984;
_Bool var_10 = (_Bool)0;
unsigned int var_15 = 3763527692U;
unsigned long long int var_17 = 12680182576051172991ULL;
int zero = 0;
unsigned long long int var_18 = 13146065830873249276ULL;
unsigned int var_19 = 2605510311U;
signed char var_20 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
