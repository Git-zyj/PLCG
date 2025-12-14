#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-91;
int var_6 = 1438974442;
unsigned short var_7 = (unsigned short)37458;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)-61;
short var_12 = (short)28461;
unsigned long long int var_14 = 6484975454008553725ULL;
int zero = 0;
long long int var_17 = -2942915252074447540LL;
unsigned short var_18 = (unsigned short)50863;
short var_19 = (short)10343;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
