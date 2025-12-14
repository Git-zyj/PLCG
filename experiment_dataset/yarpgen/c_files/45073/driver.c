#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6627572763576970107LL;
unsigned int var_2 = 3754209098U;
int var_4 = -1130733445;
unsigned int var_5 = 596310855U;
long long int var_8 = 6933883968456121827LL;
int zero = 0;
long long int var_18 = 1031136166886518562LL;
long long int var_19 = 8449489255253304126LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
