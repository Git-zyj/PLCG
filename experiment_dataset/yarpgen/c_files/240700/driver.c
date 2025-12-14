#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5507749206461133761LL;
unsigned short var_6 = (unsigned short)509;
unsigned short var_8 = (unsigned short)22620;
unsigned char var_12 = (unsigned char)127;
long long int var_15 = 5947242719989156619LL;
unsigned int var_16 = 3048914942U;
long long int var_19 = -1217491215202295069LL;
int zero = 0;
unsigned short var_20 = (unsigned short)59727;
long long int var_21 = 9148647070508405060LL;
unsigned short var_22 = (unsigned short)48086;
unsigned short var_23 = (unsigned short)28401;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
