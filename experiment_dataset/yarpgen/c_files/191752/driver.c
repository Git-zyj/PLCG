#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49655;
short var_1 = (short)3572;
short var_2 = (short)-29486;
unsigned int var_3 = 1313471677U;
short var_4 = (short)13699;
unsigned long long int var_5 = 14053781248080825818ULL;
unsigned char var_6 = (unsigned char)221;
short var_7 = (short)11357;
unsigned long long int var_8 = 3173723933793678446ULL;
unsigned int var_9 = 19686687U;
unsigned short var_10 = (unsigned short)44347;
unsigned char var_11 = (unsigned char)110;
unsigned short var_12 = (unsigned short)60016;
unsigned long long int var_13 = 18251475748613359625ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)34122;
int var_15 = 865574734;
int var_16 = 836967921;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
