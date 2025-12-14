#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 578835050016315196ULL;
unsigned short var_1 = (unsigned short)41728;
signed char var_2 = (signed char)69;
int var_3 = -518727560;
unsigned int var_5 = 218760067U;
unsigned int var_6 = 3270072673U;
unsigned int var_8 = 3086162666U;
unsigned long long int var_9 = 7396918251329455292ULL;
unsigned int var_10 = 2955903399U;
int zero = 0;
unsigned long long int var_11 = 6914980277440309999ULL;
short var_12 = (short)-8712;
int var_13 = -1360096835;
unsigned int var_14 = 46419113U;
void init() {
}

void checksum() {
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
