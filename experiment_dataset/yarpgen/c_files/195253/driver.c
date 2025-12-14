#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1354490376;
unsigned short var_10 = (unsigned short)36549;
unsigned long long int var_12 = 6460893325604084911ULL;
int zero = 0;
long long int var_16 = -4973355494493030344LL;
unsigned char var_17 = (unsigned char)160;
unsigned char var_18 = (unsigned char)21;
unsigned short var_19 = (unsigned short)64091;
signed char var_20 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
