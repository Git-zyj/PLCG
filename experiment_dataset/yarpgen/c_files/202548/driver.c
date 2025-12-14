#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9865542909338402622ULL;
unsigned char var_7 = (unsigned char)183;
unsigned short var_12 = (unsigned short)8995;
signed char var_18 = (signed char)122;
int zero = 0;
signed char var_20 = (signed char)-35;
unsigned short var_21 = (unsigned short)19367;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
