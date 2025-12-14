#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5899088701155571425LL;
unsigned char var_4 = (unsigned char)34;
short var_9 = (short)-5827;
_Bool var_11 = (_Bool)0;
unsigned char var_15 = (unsigned char)2;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-46;
short var_21 = (short)7684;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
