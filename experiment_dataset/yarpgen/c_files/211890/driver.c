#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)20864;
unsigned int var_11 = 3144813030U;
int var_12 = 1499073834;
signed char var_15 = (signed char)-42;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)78;
int zero = 0;
int var_20 = 1339474212;
_Bool var_21 = (_Bool)0;
int var_22 = -1540900544;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
