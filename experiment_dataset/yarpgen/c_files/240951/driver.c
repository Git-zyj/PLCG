#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-19912;
int var_8 = 1091533495;
unsigned long long int var_12 = 15231901085576127446ULL;
int zero = 0;
unsigned int var_13 = 366808582U;
_Bool var_14 = (_Bool)1;
long long int var_15 = 7253627467910434225LL;
signed char var_16 = (signed char)82;
unsigned char var_17 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
