#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14166;
unsigned char var_3 = (unsigned char)208;
int var_5 = -1326887494;
signed char var_6 = (signed char)1;
signed char var_7 = (signed char)-87;
long long int var_8 = 4518588437683687398LL;
signed char var_9 = (signed char)-114;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)14791;
unsigned char var_12 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
