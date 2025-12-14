#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6691338717020716544LL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-64;
unsigned long long int var_9 = 3874215020166432933ULL;
signed char var_10 = (signed char)-18;
unsigned char var_14 = (unsigned char)207;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
