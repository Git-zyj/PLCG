#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
signed char var_1 = (signed char)83;
unsigned int var_8 = 3967248609U;
signed char var_9 = (signed char)116;
signed char var_17 = (signed char)109;
unsigned char var_18 = (unsigned char)181;
int zero = 0;
short var_19 = (short)17029;
unsigned char var_20 = (unsigned char)125;
short var_21 = (short)-20776;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
