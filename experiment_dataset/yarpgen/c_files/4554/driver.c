#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1820264434;
unsigned short var_5 = (unsigned short)23903;
unsigned short var_9 = (unsigned short)34619;
int zero = 0;
unsigned char var_11 = (unsigned char)176;
unsigned char var_12 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
