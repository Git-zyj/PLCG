#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)76;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-103;
int var_10 = -259243806;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-25651;
unsigned int var_14 = 3372471609U;
unsigned int var_15 = 3111370337U;
unsigned int var_16 = 3357197749U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
