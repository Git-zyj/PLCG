#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_8 = (unsigned char)196;
signed char var_9 = (signed char)28;
short var_11 = (short)-779;
int var_12 = 90738543;
int zero = 0;
unsigned short var_16 = (unsigned short)9747;
signed char var_17 = (signed char)-82;
short var_18 = (short)5567;
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
