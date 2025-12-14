#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12884282901129924719ULL;
unsigned char var_1 = (unsigned char)227;
unsigned int var_2 = 2911159178U;
long long int var_3 = -2616764979033957501LL;
unsigned long long int var_4 = 4249419283405372015ULL;
unsigned char var_5 = (unsigned char)103;
unsigned short var_7 = (unsigned short)43854;
unsigned long long int var_9 = 9959126710497331424ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)2977;
void init() {
}

void checksum() {
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
