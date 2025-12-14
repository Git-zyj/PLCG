#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11488605436023867545ULL;
unsigned char var_3 = (unsigned char)147;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2487579048U;
unsigned int var_7 = 3530444710U;
unsigned short var_9 = (unsigned short)49852;
unsigned char var_11 = (unsigned char)78;
int zero = 0;
long long int var_12 = 5583200926020733290LL;
unsigned long long int var_13 = 3654023290830666590ULL;
unsigned int var_14 = 871119624U;
void init() {
}

void checksum() {
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
