#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1892905416;
signed char var_11 = (signed char)-107;
unsigned char var_15 = (unsigned char)197;
int zero = 0;
unsigned short var_19 = (unsigned short)2121;
signed char var_20 = (signed char)-71;
void init() {
}

void checksum() {
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
