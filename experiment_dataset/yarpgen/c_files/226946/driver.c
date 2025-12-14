#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4556;
long long int var_6 = 96837895592310993LL;
signed char var_7 = (signed char)-43;
signed char var_10 = (signed char)-15;
unsigned short var_12 = (unsigned short)20512;
signed char var_15 = (signed char)-101;
signed char var_16 = (signed char)-63;
int zero = 0;
int var_17 = -62465912;
int var_18 = -1773861089;
signed char var_19 = (signed char)109;
unsigned char var_20 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
