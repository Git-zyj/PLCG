#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17187;
_Bool var_5 = (_Bool)0;
int var_6 = -1113761979;
unsigned short var_9 = (unsigned short)9376;
int zero = 0;
unsigned char var_11 = (unsigned char)132;
int var_12 = 368239222;
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
