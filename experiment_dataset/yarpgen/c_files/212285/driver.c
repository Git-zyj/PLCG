#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24413;
int var_3 = 1274339470;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 15001784722279113444ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)200;
unsigned short var_15 = (unsigned short)15179;
signed char var_16 = (signed char)-77;
int var_17 = 1476642289;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
