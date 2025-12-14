#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)3860;
unsigned char var_2 = (unsigned char)103;
unsigned long long int var_4 = 12610488975525921737ULL;
long long int var_5 = 6761949291242865377LL;
unsigned char var_6 = (unsigned char)10;
signed char var_7 = (signed char)26;
unsigned char var_8 = (unsigned char)69;
int var_9 = 444438289;
int zero = 0;
unsigned char var_10 = (unsigned char)123;
unsigned char var_11 = (unsigned char)185;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
