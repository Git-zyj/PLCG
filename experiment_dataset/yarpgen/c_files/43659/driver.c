#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)21;
unsigned char var_3 = (unsigned char)246;
unsigned char var_4 = (unsigned char)26;
unsigned char var_5 = (unsigned char)53;
unsigned char var_6 = (unsigned char)32;
unsigned char var_7 = (unsigned char)206;
unsigned char var_8 = (unsigned char)155;
unsigned char var_9 = (unsigned char)220;
unsigned char var_11 = (unsigned char)154;
int zero = 0;
unsigned char var_12 = (unsigned char)226;
unsigned char var_13 = (unsigned char)141;
unsigned char var_14 = (unsigned char)12;
unsigned char var_15 = (unsigned char)223;
unsigned char var_16 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
