#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -619256019;
unsigned char var_7 = (unsigned char)82;
unsigned char var_9 = (unsigned char)183;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-28345;
unsigned char var_14 = (unsigned char)243;
int zero = 0;
int var_19 = 1878562355;
signed char var_20 = (signed char)-48;
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
