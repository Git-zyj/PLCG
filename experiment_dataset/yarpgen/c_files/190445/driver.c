#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64002;
signed char var_8 = (signed char)-48;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-11554;
unsigned long long int var_14 = 15869156185385563343ULL;
unsigned short var_16 = (unsigned short)13415;
unsigned int var_17 = 3881559332U;
unsigned long long int var_18 = 9065712026860834966ULL;
int zero = 0;
long long int var_19 = 7456287651356282009LL;
unsigned char var_20 = (unsigned char)143;
unsigned long long int var_21 = 717567943060219524ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
