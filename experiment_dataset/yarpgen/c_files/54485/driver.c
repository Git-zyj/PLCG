#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3337936725906044578ULL;
signed char var_6 = (signed char)-48;
unsigned char var_7 = (unsigned char)172;
unsigned long long int var_9 = 17643039761601999807ULL;
unsigned char var_10 = (unsigned char)165;
unsigned char var_11 = (unsigned char)194;
unsigned long long int var_13 = 7288768460858002018ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)167;
unsigned long long int var_21 = 10066103251559306502ULL;
signed char var_22 = (signed char)95;
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
