#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11150108071957388010ULL;
unsigned int var_6 = 1244317526U;
long long int var_9 = 6243987501955448604LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)4548;
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
