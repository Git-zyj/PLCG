#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-45;
unsigned short var_8 = (unsigned short)29239;
long long int var_10 = -8463199122893844522LL;
signed char var_15 = (signed char)49;
int zero = 0;
signed char var_16 = (signed char)-21;
unsigned int var_17 = 832755579U;
unsigned long long int var_18 = 14450012901341843519ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
