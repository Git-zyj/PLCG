#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)81;
unsigned char var_2 = (unsigned char)17;
unsigned char var_4 = (unsigned char)192;
unsigned char var_7 = (unsigned char)108;
unsigned char var_8 = (unsigned char)106;
unsigned char var_12 = (unsigned char)233;
int zero = 0;
short var_18 = (short)-31301;
short var_19 = (short)-19150;
unsigned char var_20 = (unsigned char)188;
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
