#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -927168284;
long long int var_1 = -409246356917174190LL;
int zero = 0;
unsigned short var_12 = (unsigned short)46257;
long long int var_13 = -9157563895459110319LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
