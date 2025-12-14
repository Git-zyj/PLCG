#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
unsigned char var_1 = (unsigned char)33;
unsigned long long int var_3 = 18109521961526300124ULL;
unsigned char var_6 = (unsigned char)121;
unsigned char var_12 = (unsigned char)197;
int zero = 0;
unsigned char var_13 = (unsigned char)239;
unsigned char var_14 = (unsigned char)19;
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
