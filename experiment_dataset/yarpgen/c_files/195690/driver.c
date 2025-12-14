#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-94;
_Bool var_10 = (_Bool)0;
unsigned long long int var_14 = 4395524310540502663ULL;
unsigned short var_16 = (unsigned short)50096;
int zero = 0;
unsigned short var_18 = (unsigned short)4809;
int var_19 = 1651152211;
void init() {
}

void checksum() {
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
