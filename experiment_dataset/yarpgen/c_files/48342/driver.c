#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
_Bool var_1 = (_Bool)0;
int var_2 = 80579396;
unsigned short var_3 = (unsigned short)42987;
signed char var_4 = (signed char)-106;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)42272;
unsigned char var_9 = (unsigned char)236;
unsigned char var_10 = (unsigned char)60;
unsigned char var_11 = (unsigned char)234;
int zero = 0;
unsigned long long int var_12 = 14295196559408159248ULL;
unsigned char var_13 = (unsigned char)122;
short var_14 = (short)-14095;
signed char var_15 = (signed char)-60;
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
