#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4290563377U;
unsigned char var_4 = (unsigned char)120;
long long int var_6 = -4502220097690889302LL;
unsigned int var_10 = 1551818678U;
unsigned short var_11 = (unsigned short)12157;
int zero = 0;
short var_12 = (short)16753;
int var_13 = -1309909679;
long long int var_14 = 5726320203988551671LL;
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
