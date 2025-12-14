#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -388154820;
unsigned long long int var_1 = 5222022243869659597ULL;
unsigned int var_2 = 180108836U;
unsigned long long int var_3 = 8592940296678225738ULL;
unsigned long long int var_4 = 4176362793810020471ULL;
unsigned long long int var_5 = 726248390577261254ULL;
short var_7 = (short)10266;
int var_8 = -283941987;
int zero = 0;
int var_10 = 894385821;
unsigned short var_11 = (unsigned short)39772;
unsigned short var_12 = (unsigned short)4897;
signed char var_13 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
