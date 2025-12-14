#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16330141249776375941ULL;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-8;
unsigned int var_7 = 2558993275U;
unsigned char var_8 = (unsigned char)156;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 1385933805U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 16064001176692676018ULL;
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
