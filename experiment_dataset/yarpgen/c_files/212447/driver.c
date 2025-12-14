#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)44;
_Bool var_5 = (_Bool)1;
long long int var_8 = 1281481338154654955LL;
signed char var_10 = (signed char)-125;
int var_11 = 64845431;
int zero = 0;
unsigned char var_12 = (unsigned char)110;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4539535513082338746ULL;
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
