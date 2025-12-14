#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6952;
unsigned int var_5 = 1805968601U;
int var_6 = 954670578;
unsigned char var_7 = (unsigned char)163;
long long int var_8 = 5056876551278429228LL;
int zero = 0;
unsigned long long int var_10 = 15205957060286729070ULL;
unsigned char var_11 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
