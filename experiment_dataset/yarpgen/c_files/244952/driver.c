#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23543;
unsigned long long int var_3 = 6799011385806896832ULL;
unsigned char var_6 = (unsigned char)253;
int zero = 0;
int var_10 = 82649181;
signed char var_11 = (signed char)107;
short var_12 = (short)6640;
unsigned int var_13 = 1860170588U;
long long int var_14 = -6914439535551204486LL;
long long int var_15 = 5985938972499432025LL;
unsigned long long int var_16 = 3185966955351696553ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
