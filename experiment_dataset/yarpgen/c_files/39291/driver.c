#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2248992260U;
unsigned long long int var_5 = 11691574374311981156ULL;
unsigned long long int var_6 = 14551740001097573119ULL;
signed char var_9 = (signed char)-75;
unsigned short var_12 = (unsigned short)8360;
unsigned short var_13 = (unsigned short)59062;
int zero = 0;
unsigned short var_16 = (unsigned short)18357;
unsigned long long int var_17 = 12110945172327746278ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
