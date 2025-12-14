#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8517;
short var_4 = (short)23341;
int var_12 = -250915219;
int var_16 = 1214045746;
int zero = 0;
signed char var_19 = (signed char)122;
unsigned short var_20 = (unsigned short)60727;
_Bool var_21 = (_Bool)1;
int var_22 = -99136445;
long long int var_23 = -144174368205251077LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
