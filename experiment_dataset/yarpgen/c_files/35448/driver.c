#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 174661241;
unsigned char var_4 = (unsigned char)208;
unsigned char var_5 = (unsigned char)10;
int var_7 = 367124340;
unsigned char var_11 = (unsigned char)70;
int zero = 0;
int var_15 = 998808664;
int var_16 = -2128883809;
unsigned char var_17 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
