#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_6 = -6557037220289577629LL;
unsigned short var_7 = (unsigned short)41514;
short var_17 = (short)-20415;
int zero = 0;
short var_18 = (short)-10034;
long long int var_19 = -7007831501937661205LL;
short var_20 = (short)-16404;
unsigned long long int var_21 = 13013896754042804601ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
