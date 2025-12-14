#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7944688193380998394ULL;
unsigned long long int var_1 = 5742240900691467320ULL;
signed char var_2 = (signed char)-17;
int var_3 = -1838544808;
int var_4 = 1532780576;
unsigned long long int var_5 = 14968785722845883603ULL;
unsigned char var_6 = (unsigned char)69;
unsigned int var_7 = 1213269370U;
unsigned long long int var_8 = 16732946044219089044ULL;
signed char var_9 = (signed char)-40;
int zero = 0;
unsigned char var_10 = (unsigned char)3;
long long int var_11 = 545981610053460772LL;
unsigned char var_12 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
