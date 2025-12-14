#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14301;
unsigned long long int var_2 = 10985281032837927355ULL;
unsigned char var_3 = (unsigned char)19;
_Bool var_4 = (_Bool)1;
short var_9 = (short)18002;
int zero = 0;
unsigned long long int var_11 = 14106828383984621439ULL;
unsigned long long int var_12 = 14529250614012411432ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
