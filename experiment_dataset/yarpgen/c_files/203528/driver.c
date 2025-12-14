#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -68073527010115892LL;
int var_10 = 1430616407;
unsigned long long int var_16 = 18164409895659245990ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)6463;
int var_20 = -1155002908;
unsigned int var_21 = 2950387635U;
unsigned int var_22 = 4114662977U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
