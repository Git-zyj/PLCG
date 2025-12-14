#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)40;
signed char var_3 = (signed char)4;
unsigned char var_4 = (unsigned char)208;
unsigned int var_6 = 3452586886U;
unsigned char var_7 = (unsigned char)62;
unsigned short var_9 = (unsigned short)60014;
unsigned long long int var_10 = 14570181747088313137ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)6;
unsigned char var_12 = (unsigned char)134;
signed char var_13 = (signed char)-58;
unsigned int var_14 = 1787276184U;
short var_15 = (short)-30993;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
