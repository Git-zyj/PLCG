#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)73;
unsigned char var_3 = (unsigned char)250;
unsigned int var_5 = 1189899298U;
unsigned int var_7 = 3885707483U;
unsigned char var_8 = (unsigned char)230;
unsigned char var_10 = (unsigned char)28;
int var_11 = 1772551487;
int zero = 0;
long long int var_12 = 3661999776360145986LL;
signed char var_13 = (signed char)70;
void init() {
}

void checksum() {
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
