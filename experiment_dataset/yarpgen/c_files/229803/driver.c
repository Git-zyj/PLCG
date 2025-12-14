#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)133;
unsigned long long int var_4 = 11105339717302729195ULL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = 2380895;
signed char var_9 = (signed char)17;
int zero = 0;
unsigned short var_16 = (unsigned short)60020;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
