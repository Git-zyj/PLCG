#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14696339238743368746ULL;
short var_5 = (short)9773;
unsigned char var_7 = (unsigned char)234;
unsigned int var_8 = 3098895861U;
short var_11 = (short)-13262;
signed char var_15 = (signed char)74;
unsigned int var_17 = 3572529966U;
int zero = 0;
unsigned short var_19 = (unsigned short)48754;
long long int var_20 = -4734796603394669662LL;
int var_21 = 1834899053;
int var_22 = 2118229675;
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
