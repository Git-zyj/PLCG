#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16219636783214918160ULL;
unsigned char var_2 = (unsigned char)142;
signed char var_5 = (signed char)-55;
int var_9 = -1193241287;
unsigned long long int var_11 = 8167795530810814020ULL;
unsigned long long int var_14 = 2080129186041955667ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)188;
long long int var_16 = -3627902165560396634LL;
unsigned long long int var_17 = 12725454265758034467ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
