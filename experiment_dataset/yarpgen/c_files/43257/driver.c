#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2210992281U;
long long int var_2 = -6887285021206054429LL;
unsigned int var_5 = 3356030381U;
short var_6 = (short)-27705;
long long int var_10 = 8056978298642350232LL;
unsigned long long int var_14 = 11882955937474845769ULL;
unsigned char var_15 = (unsigned char)211;
signed char var_18 = (signed char)43;
int zero = 0;
unsigned int var_19 = 300872525U;
unsigned long long int var_20 = 2039366109278153602ULL;
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
