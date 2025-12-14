#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7799973382378771322LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 5830944022612221861LL;
unsigned int var_11 = 2643026825U;
signed char var_17 = (signed char)86;
int zero = 0;
unsigned int var_19 = 1137724341U;
long long int var_20 = 3499770321940422507LL;
unsigned long long int var_21 = 8673437039471911691ULL;
void init() {
}

void checksum() {
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
