#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned short var_1 = (unsigned short)64678;
signed char var_2 = (signed char)52;
unsigned int var_3 = 3742808424U;
unsigned char var_5 = (unsigned char)140;
int zero = 0;
long long int var_14 = 3151989213025195848LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)55721;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
