#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3110032329544773206LL;
unsigned char var_2 = (unsigned char)58;
signed char var_4 = (signed char)-25;
unsigned long long int var_5 = 9145886750695529870ULL;
short var_9 = (short)12788;
short var_12 = (short)6941;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_16 = 535226799;
unsigned int var_17 = 35663430U;
unsigned short var_18 = (unsigned short)12204;
unsigned long long int var_19 = 10151518879631740496ULL;
unsigned long long int var_20 = 12672911300572738884ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
