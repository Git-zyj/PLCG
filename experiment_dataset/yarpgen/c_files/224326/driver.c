#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16068;
short var_1 = (short)26020;
unsigned long long int var_3 = 9601004929864698971ULL;
signed char var_8 = (signed char)-7;
unsigned short var_9 = (unsigned short)21091;
unsigned long long int var_12 = 4666805933272607935ULL;
unsigned int var_13 = 508668842U;
int zero = 0;
unsigned char var_16 = (unsigned char)208;
signed char var_17 = (signed char)-20;
int var_18 = -1986322261;
short var_19 = (short)-28612;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
