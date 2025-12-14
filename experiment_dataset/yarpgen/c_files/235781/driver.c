#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13153;
short var_4 = (short)28253;
unsigned short var_5 = (unsigned short)64489;
short var_7 = (short)-10097;
unsigned short var_8 = (unsigned short)43631;
short var_12 = (short)17911;
int zero = 0;
long long int var_14 = 1404000139966699756LL;
_Bool var_15 = (_Bool)0;
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
