#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1220621259591012010LL;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16119583195095956797ULL;
long long int var_15 = 3583198114743595962LL;
_Bool var_17 = (_Bool)0;
long long int var_19 = 8802054633083332774LL;
int zero = 0;
long long int var_20 = 6752424468658201062LL;
long long int var_21 = -4846690622707006423LL;
unsigned long long int var_22 = 12209479490678164571ULL;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-65;
void init() {
}

void checksum() {
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
