#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2320486543804136116LL;
long long int var_6 = -6935695689611478103LL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-17;
unsigned short var_14 = (unsigned short)49064;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)32183;
int zero = 0;
long long int var_17 = 7555015406438343185LL;
long long int var_18 = -3295549890868315459LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
