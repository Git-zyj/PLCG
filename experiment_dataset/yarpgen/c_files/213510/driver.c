#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27357;
signed char var_1 = (signed char)-57;
unsigned long long int var_5 = 818775806798307991ULL;
int var_6 = -1989430280;
unsigned short var_7 = (unsigned short)58752;
unsigned long long int var_8 = 9338860993305816807ULL;
int zero = 0;
signed char var_10 = (signed char)-119;
_Bool var_11 = (_Bool)1;
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
