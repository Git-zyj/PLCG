#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-90;
short var_7 = (short)-2671;
signed char var_9 = (signed char)-75;
short var_11 = (short)21660;
int var_16 = 1156630471;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)22;
void init() {
}

void checksum() {
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
