#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)237;
short var_3 = (short)-8993;
int var_5 = 1556090111;
unsigned long long int var_9 = 6408439496242748374ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)91;
int var_11 = -1968308940;
unsigned long long int var_12 = 8064681323696754450ULL;
long long int var_13 = 2644316804233822029LL;
unsigned char var_14 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
