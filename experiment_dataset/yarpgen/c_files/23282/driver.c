#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
short var_5 = (short)-151;
short var_6 = (short)18377;
unsigned char var_7 = (unsigned char)77;
unsigned char var_8 = (unsigned char)248;
int zero = 0;
short var_11 = (short)19139;
short var_12 = (short)23892;
unsigned char var_13 = (unsigned char)27;
short var_14 = (short)-10085;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
