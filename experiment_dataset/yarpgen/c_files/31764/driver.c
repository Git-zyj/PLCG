#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4163908025U;
unsigned long long int var_3 = 17950952898159050914ULL;
unsigned char var_4 = (unsigned char)215;
unsigned char var_7 = (unsigned char)31;
unsigned char var_15 = (unsigned char)189;
signed char var_18 = (signed char)-47;
int zero = 0;
unsigned int var_19 = 446494168U;
int var_20 = -949608983;
unsigned int var_21 = 1370475814U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2865039878U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
