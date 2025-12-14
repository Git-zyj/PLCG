#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_12 = (short)-21376;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)109;
signed char var_20 = (signed char)-50;
void init() {
}

void checksum() {
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
