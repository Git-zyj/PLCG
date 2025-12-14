#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
_Bool var_2 = (_Bool)1;
long long int var_4 = 7128748052643034301LL;
short var_5 = (short)5227;
long long int var_10 = 8005215643762975728LL;
int zero = 0;
unsigned char var_11 = (unsigned char)62;
unsigned short var_12 = (unsigned short)12250;
unsigned long long int var_13 = 11745578629789572137ULL;
signed char var_14 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
