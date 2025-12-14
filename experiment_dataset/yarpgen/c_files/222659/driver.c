#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46099;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 13950254239969605710ULL;
long long int var_12 = 2117848680949712179LL;
short var_13 = (short)-10956;
int zero = 0;
unsigned short var_15 = (unsigned short)52217;
short var_16 = (short)-9127;
void init() {
}

void checksum() {
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
