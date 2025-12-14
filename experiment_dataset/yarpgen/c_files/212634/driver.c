#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2501718380U;
unsigned char var_3 = (unsigned char)188;
unsigned int var_8 = 531679831U;
unsigned long long int var_9 = 1006518603006177765ULL;
int var_11 = 772669949;
short var_15 = (short)16755;
short var_18 = (short)-8244;
int zero = 0;
unsigned char var_19 = (unsigned char)202;
unsigned long long int var_20 = 8975013686200145361ULL;
unsigned long long int var_21 = 5325076637958626175ULL;
signed char var_22 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
