#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 888319927;
signed char var_7 = (signed char)-117;
long long int var_8 = 9047406676330623384LL;
short var_16 = (short)22239;
int zero = 0;
int var_20 = 1684083981;
unsigned short var_21 = (unsigned short)24772;
void init() {
}

void checksum() {
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
