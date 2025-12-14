#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-93;
long long int var_5 = 8366649091244748000LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = 6873265538135186624LL;
long long int var_10 = 5483564465079426645LL;
unsigned short var_11 = (unsigned short)10126;
unsigned short var_12 = (unsigned short)10559;
unsigned char var_14 = (unsigned char)83;
int zero = 0;
unsigned long long int var_16 = 1864009975773819960ULL;
int var_17 = -866945849;
int var_18 = 1235893775;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
