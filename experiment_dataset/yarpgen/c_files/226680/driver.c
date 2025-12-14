#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26982;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)63413;
unsigned short var_7 = (unsigned short)7186;
unsigned char var_8 = (unsigned char)166;
int zero = 0;
signed char var_19 = (signed char)77;
signed char var_20 = (signed char)-63;
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
