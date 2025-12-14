#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3488108266U;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_8 = 6425545234571535986LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)126;
int zero = 0;
int var_12 = 1178995149;
unsigned char var_13 = (unsigned char)101;
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
