#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned char var_2 = (unsigned char)228;
unsigned char var_3 = (unsigned char)165;
unsigned char var_4 = (unsigned char)174;
unsigned char var_5 = (unsigned char)82;
unsigned char var_8 = (unsigned char)27;
unsigned char var_9 = (unsigned char)147;
int zero = 0;
unsigned char var_10 = (unsigned char)71;
unsigned char var_11 = (unsigned char)225;
unsigned char var_12 = (unsigned char)33;
unsigned char var_13 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
