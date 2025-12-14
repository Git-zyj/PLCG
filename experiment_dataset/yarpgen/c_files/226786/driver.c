#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28046;
unsigned char var_4 = (unsigned char)230;
unsigned long long int var_6 = 8611048923325287586ULL;
signed char var_7 = (signed char)-124;
short var_8 = (short)20517;
unsigned int var_9 = 2802080857U;
int zero = 0;
signed char var_10 = (signed char)9;
unsigned int var_11 = 28951608U;
long long int var_12 = -643964887696114778LL;
unsigned short var_13 = (unsigned short)32609;
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
