#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9431758934124177649ULL;
long long int var_4 = 968522812080587481LL;
int var_7 = -1317476834;
_Bool var_10 = (_Bool)1;
long long int var_12 = -5914431806320495215LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 13693079800428308861ULL;
unsigned long long int var_16 = 4518080007125445489ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 4926821276811479960ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12298162829363085719ULL;
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
