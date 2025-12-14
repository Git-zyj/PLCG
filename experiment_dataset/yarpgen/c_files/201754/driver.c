#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1866560266U;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)98;
signed char var_6 = (signed char)118;
unsigned short var_7 = (unsigned short)14019;
unsigned long long int var_8 = 3978244208033875798ULL;
signed char var_10 = (signed char)-85;
unsigned short var_11 = (unsigned short)2882;
unsigned short var_12 = (unsigned short)15002;
unsigned short var_14 = (unsigned short)3621;
int zero = 0;
long long int var_15 = 8211391914480550436LL;
unsigned long long int var_16 = 6703369454082209886ULL;
void init() {
}

void checksum() {
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
