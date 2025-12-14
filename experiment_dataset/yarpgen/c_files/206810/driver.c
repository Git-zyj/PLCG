#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44392;
int var_4 = -2064532476;
signed char var_9 = (signed char)-74;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-16437;
long long int var_14 = 1839222943637343221LL;
int var_15 = 2033646578;
int zero = 0;
unsigned char var_16 = (unsigned char)196;
unsigned char var_17 = (unsigned char)3;
unsigned short var_18 = (unsigned short)27805;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
