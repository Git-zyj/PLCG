#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2654355468845461991LL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)213;
int var_6 = -759299585;
short var_7 = (short)20003;
signed char var_8 = (signed char)-26;
int zero = 0;
signed char var_10 = (signed char)-120;
short var_11 = (short)-10941;
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
