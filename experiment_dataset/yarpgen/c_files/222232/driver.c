#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2962495712151523473LL;
unsigned long long int var_3 = 18421338993368700514ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)135;
long long int var_10 = -2083845076829134986LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)199;
int var_13 = 23498486;
unsigned long long int var_14 = 8622374844711221305ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
