#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1133025232U;
unsigned char var_7 = (unsigned char)254;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-47;
unsigned int var_13 = 3214781659U;
int var_14 = 611240729;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
