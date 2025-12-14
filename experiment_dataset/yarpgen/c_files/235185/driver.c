#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6576204837182727513ULL;
unsigned int var_5 = 1638905684U;
unsigned int var_6 = 1658029435U;
unsigned int var_10 = 404628840U;
signed char var_11 = (signed char)-47;
signed char var_13 = (signed char)22;
int zero = 0;
unsigned int var_17 = 3106132302U;
unsigned char var_18 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
