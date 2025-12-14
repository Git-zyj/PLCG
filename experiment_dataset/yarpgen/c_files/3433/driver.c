#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)74;
unsigned char var_4 = (unsigned char)30;
unsigned char var_7 = (unsigned char)86;
signed char var_15 = (signed char)111;
int zero = 0;
unsigned char var_18 = (unsigned char)151;
long long int var_19 = 2049336088521087781LL;
unsigned int var_20 = 1444038147U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
