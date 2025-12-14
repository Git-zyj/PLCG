#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5174116997810351067LL;
unsigned short var_4 = (unsigned short)33582;
unsigned char var_6 = (unsigned char)178;
unsigned int var_7 = 3960902606U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3207752658U;
unsigned long long int var_10 = 17939759765689228224ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)56383;
signed char var_12 = (signed char)-112;
void init() {
}

void checksum() {
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
