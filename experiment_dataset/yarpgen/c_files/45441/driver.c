#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1065161608U;
unsigned short var_2 = (unsigned short)20594;
short var_3 = (short)13194;
int var_5 = 531078390;
unsigned short var_7 = (unsigned short)49949;
unsigned long long int var_8 = 17529520007518359143ULL;
int zero = 0;
long long int var_11 = -5966685055367764716LL;
unsigned long long int var_12 = 9689671812342462285ULL;
short var_13 = (short)-9766;
unsigned char var_14 = (unsigned char)135;
short var_15 = (short)-26537;
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
