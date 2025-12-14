#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)32437;
int var_5 = 782089153;
unsigned long long int var_7 = 12013913533770312214ULL;
unsigned short var_8 = (unsigned short)63390;
unsigned short var_9 = (unsigned short)29718;
int zero = 0;
signed char var_12 = (signed char)-97;
signed char var_13 = (signed char)38;
signed char var_14 = (signed char)-37;
signed char var_15 = (signed char)4;
void init() {
}

void checksum() {
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
