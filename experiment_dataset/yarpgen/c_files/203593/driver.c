#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)82;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-27686;
signed char var_13 = (signed char)85;
signed char var_15 = (signed char)119;
int zero = 0;
long long int var_16 = 6893451160042877731LL;
unsigned char var_17 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
