#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
unsigned char var_4 = (unsigned char)232;
unsigned short var_5 = (unsigned short)13822;
short var_6 = (short)-24150;
short var_7 = (short)13264;
unsigned short var_10 = (unsigned short)39543;
unsigned short var_11 = (unsigned short)53367;
short var_12 = (short)-5487;
int zero = 0;
unsigned int var_13 = 3400022335U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
