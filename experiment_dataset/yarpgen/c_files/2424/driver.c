#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-24;
short var_4 = (short)10807;
long long int var_5 = 5753570210871228693LL;
long long int var_10 = -7183574903378251853LL;
long long int var_12 = -2696387721332526704LL;
short var_16 = (short)8679;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 13976411295868734812ULL;
unsigned short var_19 = (unsigned short)41822;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
