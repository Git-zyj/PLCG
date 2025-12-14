#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39293;
unsigned short var_2 = (unsigned short)63578;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-51;
long long int var_11 = -367494897844837277LL;
unsigned char var_12 = (unsigned char)83;
int zero = 0;
unsigned short var_13 = (unsigned short)57873;
_Bool var_14 = (_Bool)1;
int var_15 = -469989212;
short var_16 = (short)-28846;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
