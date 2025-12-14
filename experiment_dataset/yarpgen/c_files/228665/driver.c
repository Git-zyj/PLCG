#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7164235797062730008LL;
unsigned char var_2 = (unsigned char)85;
unsigned char var_7 = (unsigned char)204;
unsigned char var_8 = (unsigned char)132;
int var_11 = -231025534;
unsigned short var_12 = (unsigned short)26864;
int var_13 = -1110773792;
unsigned int var_15 = 2210360256U;
long long int var_16 = 3071847144451710701LL;
int zero = 0;
unsigned char var_20 = (unsigned char)193;
signed char var_21 = (signed char)106;
long long int var_22 = -7997322797716575367LL;
short var_23 = (short)13024;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
