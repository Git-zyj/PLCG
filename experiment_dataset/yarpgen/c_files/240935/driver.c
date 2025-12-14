#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)5754;
int var_8 = -360060916;
short var_9 = (short)657;
long long int var_10 = -9215077624458607379LL;
unsigned int var_11 = 3700071072U;
signed char var_12 = (signed char)-117;
unsigned short var_14 = (unsigned short)42283;
int zero = 0;
unsigned short var_19 = (unsigned short)39116;
unsigned short var_20 = (unsigned short)62890;
signed char var_21 = (signed char)-105;
unsigned long long int var_22 = 8656013281566340590ULL;
signed char var_23 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
