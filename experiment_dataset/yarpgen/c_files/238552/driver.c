#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25102;
_Bool var_3 = (_Bool)1;
unsigned short var_11 = (unsigned short)9867;
unsigned long long int var_14 = 3000733597258751984ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)3516;
signed char var_16 = (signed char)100;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-33;
unsigned char var_19 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
