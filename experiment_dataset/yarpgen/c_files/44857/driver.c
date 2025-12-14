#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28534;
signed char var_7 = (signed char)-97;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 9853275002564502073ULL;
int var_13 = 609463555;
int zero = 0;
int var_15 = -424778372;
unsigned short var_16 = (unsigned short)52880;
void init() {
}

void checksum() {
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
