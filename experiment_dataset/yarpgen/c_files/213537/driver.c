#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
unsigned short var_3 = (unsigned short)43111;
signed char var_5 = (signed char)-59;
long long int var_10 = -7222444387328284067LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 4647876786849680092LL;
int zero = 0;
short var_14 = (short)-19577;
signed char var_15 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
