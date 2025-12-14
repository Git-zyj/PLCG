#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)124;
unsigned char var_7 = (unsigned char)65;
unsigned char var_10 = (unsigned char)0;
unsigned short var_15 = (unsigned short)40646;
int zero = 0;
unsigned short var_19 = (unsigned short)45620;
_Bool var_20 = (_Bool)1;
long long int var_21 = -2242196909437607671LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
