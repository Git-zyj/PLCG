#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21672;
int var_3 = 1256188684;
long long int var_4 = 7671601646994058493LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 587777262613347401ULL;
unsigned int var_9 = 3629495260U;
int var_11 = -2037683607;
int zero = 0;
int var_12 = 695002551;
int var_13 = -955439393;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
