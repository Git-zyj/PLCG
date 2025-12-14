#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)52913;
signed char var_6 = (signed char)16;
unsigned short var_7 = (unsigned short)5771;
unsigned int var_12 = 2471281713U;
int zero = 0;
unsigned short var_20 = (unsigned short)32322;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)41;
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
