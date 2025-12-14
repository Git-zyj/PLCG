#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3909015856756761964LL;
unsigned char var_6 = (unsigned char)86;
unsigned short var_7 = (unsigned short)24100;
long long int var_12 = -8222929958725814928LL;
int zero = 0;
long long int var_13 = 1879456539751930684LL;
int var_14 = 1725163908;
_Bool var_15 = (_Bool)0;
int var_16 = 326058126;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
