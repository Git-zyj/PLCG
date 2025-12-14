#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6938;
signed char var_2 = (signed char)59;
unsigned short var_3 = (unsigned short)46521;
short var_4 = (short)10781;
unsigned char var_5 = (unsigned char)195;
unsigned char var_7 = (unsigned char)166;
unsigned char var_9 = (unsigned char)252;
unsigned int var_12 = 2520345561U;
short var_13 = (short)30526;
signed char var_14 = (signed char)-78;
int zero = 0;
long long int var_15 = -1106294709238000253LL;
short var_16 = (short)15240;
short var_17 = (short)27335;
unsigned long long int var_18 = 17680209761408551590ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
