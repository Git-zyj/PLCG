#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23988;
short var_1 = (short)-25352;
signed char var_3 = (signed char)-78;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-11404;
signed char var_8 = (signed char)24;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)4373;
signed char var_12 = (signed char)10;
unsigned short var_13 = (unsigned short)48569;
unsigned short var_14 = (unsigned short)63928;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
