#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13198245009077415620ULL;
long long int var_3 = 1615024971526147345LL;
unsigned short var_4 = (unsigned short)5811;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)21297;
short var_8 = (short)13034;
int zero = 0;
int var_10 = 546140611;
_Bool var_11 = (_Bool)1;
int var_12 = 379702037;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
