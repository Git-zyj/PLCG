#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-127;
int var_4 = -811597643;
unsigned short var_7 = (unsigned short)47494;
signed char var_9 = (signed char)86;
unsigned int var_11 = 2873089351U;
unsigned char var_13 = (unsigned char)227;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 3687365425U;
signed char var_18 = (signed char)65;
short var_19 = (short)-30547;
unsigned short var_20 = (unsigned short)46331;
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
