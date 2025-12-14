#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 1267164476108717799ULL;
unsigned long long int var_13 = 7899138006505729689ULL;
unsigned short var_14 = (unsigned short)50780;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 5941494904056716949ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5187609882735976457LL;
unsigned int var_20 = 3338045070U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
