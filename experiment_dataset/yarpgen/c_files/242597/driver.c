#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57786;
short var_2 = (short)-26563;
unsigned short var_7 = (unsigned short)20444;
short var_11 = (short)4562;
int zero = 0;
unsigned char var_13 = (unsigned char)145;
unsigned short var_14 = (unsigned short)11443;
void init() {
}

void checksum() {
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
