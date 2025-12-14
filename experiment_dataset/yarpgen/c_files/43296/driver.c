#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
signed char var_4 = (signed char)62;
unsigned char var_6 = (unsigned char)197;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)111;
unsigned short var_17 = (unsigned short)63214;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
