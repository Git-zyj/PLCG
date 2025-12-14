#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1519578335332505852LL;
long long int var_6 = -4291044646851252560LL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)169;
int zero = 0;
unsigned char var_14 = (unsigned char)45;
short var_15 = (short)17633;
short var_16 = (short)29953;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
