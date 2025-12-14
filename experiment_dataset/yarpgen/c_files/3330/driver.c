#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53523;
long long int var_1 = -4978661328344232742LL;
short var_2 = (short)24064;
int var_6 = -422330464;
unsigned long long int var_8 = 17970059591127819059ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)31071;
int var_12 = -495780385;
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
