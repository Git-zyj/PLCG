#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3001601241152987328LL;
unsigned int var_4 = 299271898U;
long long int var_6 = 740728899055681954LL;
unsigned short var_7 = (unsigned short)5543;
long long int var_11 = 4365314691684597370LL;
int zero = 0;
unsigned short var_12 = (unsigned short)44218;
unsigned short var_13 = (unsigned short)24340;
void init() {
}

void checksum() {
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
