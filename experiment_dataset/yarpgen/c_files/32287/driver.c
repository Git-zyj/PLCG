#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
unsigned short var_2 = (unsigned short)25565;
unsigned short var_3 = (unsigned short)39298;
unsigned int var_4 = 355194263U;
unsigned short var_5 = (unsigned short)12431;
short var_8 = (short)7940;
unsigned long long int var_9 = 16862574868756038003ULL;
unsigned int var_12 = 1177927389U;
unsigned char var_13 = (unsigned char)92;
signed char var_14 = (signed char)80;
unsigned char var_16 = (unsigned char)11;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)41780;
unsigned short var_19 = (unsigned short)6896;
unsigned short var_20 = (unsigned short)60072;
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
