#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned char var_1 = (unsigned char)254;
unsigned char var_2 = (unsigned char)196;
unsigned char var_10 = (unsigned char)207;
unsigned char var_12 = (unsigned char)226;
unsigned char var_15 = (unsigned char)51;
int zero = 0;
unsigned char var_19 = (unsigned char)188;
unsigned char var_20 = (unsigned char)85;
unsigned char var_21 = (unsigned char)210;
unsigned char var_22 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
