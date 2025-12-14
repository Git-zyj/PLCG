#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15422715081520313887ULL;
long long int var_3 = 8051542965525611562LL;
unsigned short var_5 = (unsigned short)54676;
unsigned long long int var_6 = 17110801708258953554ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)148;
unsigned char var_12 = (unsigned char)228;
signed char var_13 = (signed char)70;
long long int var_14 = 1801517765707772239LL;
long long int var_15 = -7391617402140838553LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
