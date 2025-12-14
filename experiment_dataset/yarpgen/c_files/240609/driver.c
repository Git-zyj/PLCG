#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
unsigned short var_8 = (unsigned short)20998;
unsigned short var_11 = (unsigned short)6088;
int zero = 0;
short var_17 = (short)-27658;
unsigned long long int var_18 = 5050489113131974559ULL;
unsigned char var_19 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
