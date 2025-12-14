#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5537726354308887316ULL;
unsigned short var_4 = (unsigned short)15744;
signed char var_6 = (signed char)-68;
signed char var_7 = (signed char)67;
long long int var_8 = 3286255732487220317LL;
short var_9 = (short)-7899;
unsigned char var_10 = (unsigned char)153;
int zero = 0;
signed char var_11 = (signed char)10;
unsigned char var_12 = (unsigned char)166;
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
