#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2146820188U;
unsigned short var_6 = (unsigned short)63644;
int var_7 = -1606442531;
unsigned int var_8 = 1551343975U;
int var_11 = 617303858;
unsigned long long int var_12 = 6786914631873486208ULL;
int zero = 0;
long long int var_14 = 1467843345246776083LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)43379;
unsigned short var_17 = (unsigned short)42827;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
