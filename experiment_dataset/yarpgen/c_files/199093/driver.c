#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)114;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)30;
short var_6 = (short)19365;
signed char var_7 = (signed char)-111;
short var_10 = (short)-15114;
int zero = 0;
long long int var_13 = 2428037971679578782LL;
signed char var_14 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
