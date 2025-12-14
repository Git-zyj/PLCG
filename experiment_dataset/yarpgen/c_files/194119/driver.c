#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned char var_2 = (unsigned char)119;
unsigned char var_3 = (unsigned char)163;
signed char var_4 = (signed char)21;
unsigned short var_5 = (unsigned short)45518;
unsigned long long int var_7 = 11777740683689104760ULL;
long long int var_8 = 3711730697370911950LL;
int zero = 0;
unsigned long long int var_11 = 9205561343794710633ULL;
unsigned char var_12 = (unsigned char)23;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
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
