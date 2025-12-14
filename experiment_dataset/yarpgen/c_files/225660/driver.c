#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)114;
unsigned char var_11 = (unsigned char)188;
unsigned char var_17 = (unsigned char)107;
unsigned char var_18 = (unsigned char)186;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
unsigned char var_20 = (unsigned char)69;
unsigned char var_21 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
