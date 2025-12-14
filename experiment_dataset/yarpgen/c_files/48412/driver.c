#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -324598054;
unsigned short var_5 = (unsigned short)41482;
int var_8 = -1005054697;
unsigned int var_9 = 4189447809U;
unsigned short var_16 = (unsigned short)20594;
unsigned int var_18 = 3901320756U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2063530675U;
long long int var_22 = 2840283775791061351LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
