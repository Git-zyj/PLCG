#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 103694657U;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1397523218768932312LL;
unsigned int var_6 = 3008969736U;
int var_9 = -867928520;
int zero = 0;
unsigned long long int var_10 = 1782991651954787262ULL;
unsigned char var_11 = (unsigned char)158;
unsigned long long int var_12 = 11422157001350155746ULL;
int var_13 = 1512675552;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
