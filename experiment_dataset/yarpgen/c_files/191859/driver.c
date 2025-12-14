#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
signed char var_2 = (signed char)-42;
unsigned long long int var_4 = 15766342428102708298ULL;
signed char var_5 = (signed char)89;
unsigned int var_6 = 2598839941U;
unsigned short var_7 = (unsigned short)2648;
unsigned char var_8 = (unsigned char)242;
long long int var_9 = 2650244548349928760LL;
int zero = 0;
long long int var_10 = 8171232700675254397LL;
unsigned char var_11 = (unsigned char)37;
unsigned int var_12 = 1633896641U;
long long int var_13 = -7366531309639084796LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
