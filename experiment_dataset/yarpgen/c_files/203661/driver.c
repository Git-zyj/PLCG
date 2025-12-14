#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -40524093617046224LL;
_Bool var_5 = (_Bool)0;
unsigned char var_10 = (unsigned char)182;
unsigned long long int var_11 = 14571944682111390097ULL;
int zero = 0;
unsigned long long int var_12 = 17108108626073993841ULL;
short var_13 = (short)9881;
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
