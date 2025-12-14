#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4786;
int var_5 = 1619328675;
signed char var_7 = (signed char)-56;
unsigned int var_8 = 910889199U;
unsigned int var_10 = 1906196482U;
signed char var_12 = (signed char)89;
int zero = 0;
unsigned short var_17 = (unsigned short)16140;
short var_18 = (short)13493;
short var_19 = (short)17429;
unsigned short var_20 = (unsigned short)43121;
unsigned long long int var_21 = 13354633954921210567ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
