#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
unsigned char var_4 = (unsigned char)172;
int var_12 = 752176323;
int var_14 = -22664744;
unsigned short var_15 = (unsigned short)5418;
int zero = 0;
unsigned long long int var_20 = 10323343234899993308ULL;
unsigned short var_21 = (unsigned short)34251;
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
