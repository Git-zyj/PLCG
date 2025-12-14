#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1451380958;
unsigned short var_9 = (unsigned short)25939;
unsigned char var_14 = (unsigned char)209;
short var_18 = (short)1716;
int zero = 0;
long long int var_19 = 4466566678647315111LL;
unsigned short var_20 = (unsigned short)34100;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
