#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
unsigned int var_5 = 3151828699U;
unsigned char var_8 = (unsigned char)89;
int var_9 = -693976195;
short var_12 = (short)29192;
unsigned long long int var_16 = 6833489056015808637ULL;
int zero = 0;
int var_17 = 257167819;
int var_18 = 703246554;
void init() {
}

void checksum() {
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
