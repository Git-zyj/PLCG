#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-72;
long long int var_3 = -4038103252286487670LL;
unsigned short var_5 = (unsigned short)33481;
unsigned int var_7 = 1860345871U;
long long int var_10 = 8810322451374402723LL;
int zero = 0;
unsigned char var_11 = (unsigned char)125;
unsigned long long int var_12 = 7138434517720874967ULL;
void init() {
}

void checksum() {
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
