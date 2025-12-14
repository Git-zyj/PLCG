#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18795;
int zero = 0;
unsigned short var_12 = (unsigned short)24328;
unsigned long long int var_13 = 4848784476876704431ULL;
unsigned char var_14 = (unsigned char)138;
unsigned long long int var_15 = 17242464819220754164ULL;
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
