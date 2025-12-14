#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6654983647525647595ULL;
long long int var_1 = 1291543954725986872LL;
unsigned short var_5 = (unsigned short)13274;
unsigned long long int var_6 = 10652707292111937543ULL;
signed char var_7 = (signed char)-62;
unsigned short var_10 = (unsigned short)50072;
int zero = 0;
unsigned short var_12 = (unsigned short)25558;
unsigned char var_13 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
