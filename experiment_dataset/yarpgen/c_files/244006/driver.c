#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14814239520473892738ULL;
long long int var_1 = 6631065580521038250LL;
unsigned long long int var_2 = 16020639641341468984ULL;
int var_5 = 1041999102;
short var_7 = (short)7419;
unsigned int var_9 = 3920152458U;
unsigned long long int var_10 = 17712246373495133282ULL;
unsigned char var_11 = (unsigned char)45;
signed char var_13 = (signed char)45;
int zero = 0;
unsigned char var_14 = (unsigned char)120;
unsigned char var_15 = (unsigned char)4;
unsigned int var_16 = 325778427U;
signed char var_17 = (signed char)-52;
short var_18 = (short)-26401;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
