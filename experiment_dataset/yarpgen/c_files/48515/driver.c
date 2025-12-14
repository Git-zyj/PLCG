#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)119;
short var_5 = (short)7958;
signed char var_12 = (signed char)-45;
unsigned short var_18 = (unsigned short)33637;
int zero = 0;
signed char var_20 = (signed char)59;
unsigned char var_21 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
