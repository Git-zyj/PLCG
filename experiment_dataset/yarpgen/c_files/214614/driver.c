#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17633419471388897634ULL;
signed char var_3 = (signed char)111;
unsigned int var_6 = 2272384823U;
signed char var_13 = (signed char)-98;
unsigned long long int var_19 = 2361948983937884376ULL;
int zero = 0;
short var_20 = (short)-7993;
unsigned int var_21 = 2843709427U;
unsigned short var_22 = (unsigned short)50271;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
