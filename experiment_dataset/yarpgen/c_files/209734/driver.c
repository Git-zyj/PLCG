#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2063879371;
long long int var_9 = 8371020165034864500LL;
short var_12 = (short)-16036;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 1002471911857009665LL;
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
