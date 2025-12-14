#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29228;
unsigned long long int var_1 = 283209046218260669ULL;
signed char var_17 = (signed char)19;
int zero = 0;
long long int var_19 = 8301790350043624249LL;
short var_20 = (short)16317;
unsigned short var_21 = (unsigned short)30819;
signed char var_22 = (signed char)-4;
unsigned long long int var_23 = 8621745551158679944ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
