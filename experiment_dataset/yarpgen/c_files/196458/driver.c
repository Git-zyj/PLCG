#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
int var_1 = -801809519;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)20642;
unsigned int var_5 = 2559777354U;
unsigned char var_6 = (unsigned char)116;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1925299271U;
int zero = 0;
int var_12 = 2085080775;
int var_13 = 1068617630;
signed char var_14 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
