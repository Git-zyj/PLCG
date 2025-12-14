#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7572;
short var_8 = (short)-24909;
unsigned char var_10 = (unsigned char)170;
unsigned char var_13 = (unsigned char)69;
unsigned char var_15 = (unsigned char)159;
unsigned char var_17 = (unsigned char)53;
int zero = 0;
unsigned char var_19 = (unsigned char)166;
short var_20 = (short)-32169;
unsigned char var_21 = (unsigned char)207;
short var_22 = (short)31644;
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
