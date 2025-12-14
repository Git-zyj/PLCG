#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-109;
_Bool var_4 = (_Bool)0;
int var_6 = -1043419509;
signed char var_8 = (signed char)-96;
short var_10 = (short)3401;
int zero = 0;
short var_12 = (short)-28451;
unsigned long long int var_13 = 17313609723028907405ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
