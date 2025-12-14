#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)13;
short var_6 = (short)7474;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 17628685242994621305ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)3262;
int zero = 0;
signed char var_13 = (signed char)-6;
signed char var_14 = (signed char)106;
short var_15 = (short)14512;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
