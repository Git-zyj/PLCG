#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
_Bool var_1 = (_Bool)0;
int var_2 = -44529435;
short var_3 = (short)-25756;
unsigned short var_4 = (unsigned short)2909;
unsigned long long int var_5 = 742519784122828608ULL;
unsigned char var_6 = (unsigned char)137;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3061089064U;
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
