#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 394690064573718276LL;
unsigned long long int var_4 = 6576776609698271682ULL;
unsigned long long int var_16 = 14324601827992135376ULL;
int zero = 0;
unsigned long long int var_20 = 9652878922435889574ULL;
unsigned long long int var_21 = 2043923288840572092ULL;
short var_22 = (short)-3843;
unsigned short var_23 = (unsigned short)23690;
unsigned char var_24 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
