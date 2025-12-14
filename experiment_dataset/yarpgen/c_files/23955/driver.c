#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-39;
short var_5 = (short)17939;
long long int var_6 = 1703094276740503418LL;
signed char var_8 = (signed char)-57;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)114;
int zero = 0;
short var_13 = (short)24278;
signed char var_14 = (signed char)38;
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
