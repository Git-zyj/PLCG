#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
_Bool var_2 = (_Bool)0;
signed char var_7 = (signed char)112;
unsigned char var_11 = (unsigned char)86;
unsigned short var_12 = (unsigned short)60185;
int zero = 0;
unsigned char var_13 = (unsigned char)1;
signed char var_14 = (signed char)52;
signed char var_15 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
