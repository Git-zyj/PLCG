#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24705;
unsigned short var_1 = (unsigned short)8321;
signed char var_2 = (signed char)114;
unsigned int var_5 = 2923714742U;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-67;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
