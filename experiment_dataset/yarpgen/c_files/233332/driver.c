#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43954;
int var_1 = 13452514;
unsigned long long int var_3 = 17248959284955668933ULL;
signed char var_4 = (signed char)2;
unsigned short var_6 = (unsigned short)9359;
short var_7 = (short)21650;
long long int var_8 = 94386342559248689LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)1151;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
