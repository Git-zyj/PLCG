#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned short var_2 = (unsigned short)27267;
unsigned long long int var_4 = 13431261663550024626ULL;
unsigned char var_5 = (unsigned char)89;
signed char var_8 = (signed char)79;
int zero = 0;
short var_10 = (short)13637;
unsigned char var_11 = (unsigned char)7;
signed char var_12 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
