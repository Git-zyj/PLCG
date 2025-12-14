#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4114614742U;
unsigned short var_6 = (unsigned short)43106;
signed char var_7 = (signed char)89;
unsigned char var_9 = (unsigned char)218;
short var_11 = (short)-13130;
unsigned long long int var_12 = 15765633216981300055ULL;
signed char var_13 = (signed char)-86;
int zero = 0;
int var_14 = -1329991175;
unsigned char var_15 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
