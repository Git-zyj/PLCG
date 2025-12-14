#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1871670320;
int var_4 = 1898773467;
signed char var_6 = (signed char)3;
_Bool var_7 = (_Bool)1;
int var_9 = -1009083074;
unsigned char var_10 = (unsigned char)92;
short var_11 = (short)-29240;
int zero = 0;
signed char var_13 = (signed char)-104;
unsigned char var_14 = (unsigned char)5;
int var_15 = -2026855356;
signed char var_16 = (signed char)-19;
void init() {
}

void checksum() {
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
