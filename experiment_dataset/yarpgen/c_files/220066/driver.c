#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
_Bool var_1 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-112;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-114;
signed char var_14 = (signed char)52;
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
