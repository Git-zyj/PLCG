#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)127;
unsigned short var_2 = (unsigned short)48928;
int var_7 = -1751354773;
short var_9 = (short)7896;
long long int var_10 = 4191592410435457000LL;
unsigned char var_11 = (unsigned char)162;
unsigned char var_12 = (unsigned char)160;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-21;
long long int var_15 = 2681934753200948662LL;
int var_16 = -166569639;
void init() {
}

void checksum() {
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
