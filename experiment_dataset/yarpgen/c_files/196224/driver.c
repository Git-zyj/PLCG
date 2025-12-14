#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 1211480772288622520ULL;
signed char var_9 = (signed char)-16;
long long int var_17 = 2310963275691100479LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-87;
unsigned long long int var_22 = 17448602612979233943ULL;
long long int var_23 = 9098846545594863165LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
