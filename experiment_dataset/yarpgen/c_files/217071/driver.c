#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned int var_1 = 2290506267U;
long long int var_2 = 6150163921488587900LL;
long long int var_5 = -1585132210838903597LL;
signed char var_6 = (signed char)-117;
signed char var_7 = (signed char)-23;
unsigned long long int var_8 = 205642480041116776ULL;
int zero = 0;
unsigned long long int var_10 = 3948527528136490466ULL;
unsigned short var_11 = (unsigned short)54565;
unsigned char var_12 = (unsigned char)119;
unsigned short var_13 = (unsigned short)44405;
int var_14 = 1706266813;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
