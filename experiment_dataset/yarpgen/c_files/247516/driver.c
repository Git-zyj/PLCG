#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1910070095065537082LL;
_Bool var_2 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_14 = 825433579;
unsigned int var_17 = 1005753748U;
int zero = 0;
unsigned char var_19 = (unsigned char)102;
unsigned short var_20 = (unsigned short)58982;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
