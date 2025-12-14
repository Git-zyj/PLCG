#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)44;
long long int var_6 = 3357932863230780794LL;
unsigned short var_7 = (unsigned short)34480;
unsigned long long int var_8 = 11883769949115092760ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_17 = 2295583556U;
int zero = 0;
unsigned long long int var_18 = 4050863045703171596ULL;
unsigned char var_19 = (unsigned char)32;
unsigned char var_20 = (unsigned char)247;
void init() {
}

void checksum() {
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
