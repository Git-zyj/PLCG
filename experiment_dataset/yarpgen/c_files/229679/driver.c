#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 913043185;
unsigned short var_4 = (unsigned short)1801;
unsigned int var_5 = 733159187U;
unsigned short var_6 = (unsigned short)20876;
unsigned short var_7 = (unsigned short)18602;
unsigned char var_8 = (unsigned char)133;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)18553;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
