#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1502454222;
short var_4 = (short)6088;
int var_5 = -1636230195;
long long int var_6 = 1234556517617597943LL;
long long int var_7 = 4028422441052090465LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 1557985362944569064ULL;
signed char var_11 = (signed char)-102;
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
