#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44227;
signed char var_6 = (signed char)-95;
unsigned short var_9 = (unsigned short)49699;
short var_11 = (short)3701;
int var_13 = 751063009;
int zero = 0;
unsigned long long int var_15 = 9828528195069945653ULL;
unsigned char var_16 = (unsigned char)9;
unsigned short var_17 = (unsigned short)39483;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
