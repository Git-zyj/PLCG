#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 586857965818760474ULL;
unsigned short var_12 = (unsigned short)19909;
int var_13 = 1172721937;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)5880;
void init() {
}

void checksum() {
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
