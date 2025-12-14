#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50274;
signed char var_2 = (signed char)-40;
unsigned char var_5 = (unsigned char)81;
short var_8 = (short)14925;
signed char var_9 = (signed char)-24;
signed char var_11 = (signed char)104;
int zero = 0;
int var_12 = -1986914366;
unsigned short var_13 = (unsigned short)37337;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
