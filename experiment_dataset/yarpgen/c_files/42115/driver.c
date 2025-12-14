#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7889;
int var_2 = -1086540135;
signed char var_3 = (signed char)121;
unsigned char var_4 = (unsigned char)168;
short var_6 = (short)-30942;
unsigned long long int var_7 = 17699424368277401613ULL;
short var_8 = (short)28479;
unsigned char var_10 = (unsigned char)153;
signed char var_16 = (signed char)76;
int zero = 0;
signed char var_17 = (signed char)58;
unsigned long long int var_18 = 11668615617941811895ULL;
unsigned long long int var_19 = 9178775060976043923ULL;
signed char var_20 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
