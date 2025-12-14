#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3293121110286071744LL;
_Bool var_6 = (_Bool)1;
signed char var_11 = (signed char)9;
unsigned char var_12 = (unsigned char)83;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-87;
unsigned short var_18 = (unsigned short)33522;
short var_19 = (short)-28049;
int var_20 = -1926245049;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
