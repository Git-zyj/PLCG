#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45520;
signed char var_2 = (signed char)64;
_Bool var_3 = (_Bool)1;
long long int var_4 = 2253526335922282466LL;
int var_5 = -719293093;
int zero = 0;
unsigned short var_10 = (unsigned short)60533;
signed char var_11 = (signed char)124;
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
