#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50321;
unsigned char var_5 = (unsigned char)252;
signed char var_11 = (signed char)-95;
int zero = 0;
long long int var_12 = -3724009879699054485LL;
unsigned short var_13 = (unsigned short)10611;
long long int var_14 = 5611297333680917784LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
