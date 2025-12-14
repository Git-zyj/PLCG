#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)71;
signed char var_4 = (signed char)109;
unsigned char var_5 = (unsigned char)50;
unsigned char var_6 = (unsigned char)112;
signed char var_7 = (signed char)70;
unsigned char var_8 = (unsigned char)129;
unsigned char var_9 = (unsigned char)246;
int zero = 0;
unsigned char var_10 = (unsigned char)17;
unsigned char var_11 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
