#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10598;
unsigned long long int var_2 = 17055479633592401693ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)168;
unsigned int var_7 = 2051216612U;
signed char var_9 = (signed char)91;
int zero = 0;
unsigned short var_12 = (unsigned short)47025;
unsigned int var_13 = 189222071U;
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
