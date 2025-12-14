#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61092;
signed char var_1 = (signed char)0;
signed char var_2 = (signed char)-52;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)78;
signed char var_7 = (signed char)121;
int zero = 0;
unsigned short var_10 = (unsigned short)61187;
unsigned int var_11 = 766338867U;
signed char var_12 = (signed char)31;
unsigned short var_13 = (unsigned short)18470;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
