#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15999;
unsigned int var_3 = 3670332110U;
long long int var_4 = 2968165010375482512LL;
unsigned int var_5 = 1570630103U;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)31933;
int var_8 = -1777443590;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)99;
int zero = 0;
long long int var_11 = 9220029061687781230LL;
unsigned short var_12 = (unsigned short)2870;
unsigned char var_13 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
