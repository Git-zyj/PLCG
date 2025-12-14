#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)47;
signed char var_5 = (signed char)-41;
long long int var_6 = -7917417093441467278LL;
signed char var_14 = (signed char)-119;
int zero = 0;
short var_17 = (short)-3044;
short var_18 = (short)12787;
short var_19 = (short)3180;
long long int var_20 = 3612841199701813078LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
