#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4036046669614098435LL;
unsigned short var_2 = (unsigned short)3715;
unsigned int var_4 = 159850849U;
short var_9 = (short)2408;
unsigned long long int var_10 = 11066340036801848692ULL;
unsigned short var_12 = (unsigned short)23950;
int zero = 0;
signed char var_14 = (signed char)-106;
unsigned long long int var_15 = 15242917277372455961ULL;
int var_16 = 194754544;
short var_17 = (short)-19421;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
