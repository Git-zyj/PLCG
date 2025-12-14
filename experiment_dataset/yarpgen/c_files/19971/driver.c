#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1544384980U;
int var_8 = 664044527;
unsigned long long int var_9 = 16311838582691329750ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)91;
int var_17 = 2051658571;
int zero = 0;
int var_18 = -597419724;
unsigned short var_19 = (unsigned short)35006;
void init() {
}

void checksum() {
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
