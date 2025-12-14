#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
signed char var_6 = (signed char)-87;
unsigned char var_7 = (unsigned char)173;
int zero = 0;
unsigned long long int var_12 = 6120772250861980726ULL;
unsigned char var_13 = (unsigned char)234;
unsigned char var_14 = (unsigned char)228;
unsigned long long int var_15 = 3566966948469918054ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
