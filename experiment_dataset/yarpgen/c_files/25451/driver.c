#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6172;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 2192316954967589605ULL;
signed char var_5 = (signed char)117;
int zero = 0;
int var_18 = 1661269771;
short var_19 = (short)-1181;
int var_20 = 220266019;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
