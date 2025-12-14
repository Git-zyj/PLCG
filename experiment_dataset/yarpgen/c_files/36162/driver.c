#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -95469164;
short var_8 = (short)-13146;
unsigned int var_9 = 3323399706U;
int zero = 0;
unsigned short var_17 = (unsigned short)46415;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)161;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
