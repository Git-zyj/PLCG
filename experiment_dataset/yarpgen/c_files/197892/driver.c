#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3972068428U;
unsigned short var_4 = (unsigned short)51595;
unsigned char var_5 = (unsigned char)216;
int var_6 = 715066664;
unsigned int var_7 = 2052060713U;
unsigned char var_10 = (unsigned char)163;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-95;
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
