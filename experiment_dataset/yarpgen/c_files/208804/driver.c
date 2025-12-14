#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8729636226138982727LL;
signed char var_2 = (signed char)-109;
signed char var_5 = (signed char)-9;
short var_12 = (short)-30859;
long long int var_14 = -7117854363452981132LL;
int zero = 0;
long long int var_19 = -1028978482976359986LL;
unsigned char var_20 = (unsigned char)127;
void init() {
}

void checksum() {
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
