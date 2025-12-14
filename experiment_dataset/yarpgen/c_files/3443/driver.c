#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned long long int var_1 = 7513711525457788681ULL;
signed char var_2 = (signed char)-8;
unsigned short var_6 = (unsigned short)57684;
signed char var_7 = (signed char)82;
unsigned long long int var_9 = 13935255744358839771ULL;
unsigned short var_10 = (unsigned short)28588;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2578346389U;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)20345;
short var_20 = (short)-9435;
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
