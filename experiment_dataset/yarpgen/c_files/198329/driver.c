#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned short var_2 = (unsigned short)57476;
unsigned char var_3 = (unsigned char)143;
long long int var_8 = 7902290319806452972LL;
int zero = 0;
signed char var_12 = (signed char)18;
signed char var_13 = (signed char)-42;
signed char var_14 = (signed char)-101;
unsigned int var_15 = 3807769743U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
