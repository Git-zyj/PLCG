#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 23232961U;
short var_2 = (short)-32736;
short var_3 = (short)-5692;
unsigned char var_4 = (unsigned char)9;
unsigned long long int var_5 = 17441630697518213259ULL;
signed char var_9 = (signed char)-90;
unsigned short var_11 = (unsigned short)38249;
signed char var_13 = (signed char)25;
int zero = 0;
unsigned int var_14 = 3497468079U;
short var_15 = (short)-30926;
short var_16 = (short)8497;
unsigned int var_17 = 4220780117U;
void init() {
}

void checksum() {
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
