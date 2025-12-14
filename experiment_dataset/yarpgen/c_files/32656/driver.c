#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
long long int var_7 = -6256006570579808940LL;
unsigned long long int var_8 = 6545283791173817219ULL;
unsigned long long int var_10 = 3413375662063327028ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)248;
unsigned char var_16 = (unsigned char)132;
unsigned long long int var_17 = 17646060047591442024ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
