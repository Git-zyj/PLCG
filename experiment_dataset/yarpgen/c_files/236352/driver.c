#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
int var_4 = -460010278;
int var_6 = -846162449;
unsigned char var_8 = (unsigned char)30;
int var_9 = -2009465362;
int zero = 0;
long long int var_17 = -4289385202019939759LL;
signed char var_18 = (signed char)-82;
void init() {
}

void checksum() {
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
