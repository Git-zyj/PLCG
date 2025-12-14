#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3228489372U;
unsigned short var_2 = (unsigned short)48071;
unsigned short var_15 = (unsigned short)60187;
long long int var_18 = 1667851578175301670LL;
int zero = 0;
unsigned long long int var_19 = 17531223502968422408ULL;
short var_20 = (short)12142;
unsigned char var_21 = (unsigned char)68;
unsigned short var_22 = (unsigned short)49105;
unsigned long long int var_23 = 15791633909548609018ULL;
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
