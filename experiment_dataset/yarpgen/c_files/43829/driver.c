#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5076332740105985015LL;
unsigned char var_1 = (unsigned char)192;
_Bool var_2 = (_Bool)0;
int var_5 = -817038765;
int var_7 = 1225564145;
int var_8 = -541944494;
unsigned int var_10 = 360031193U;
long long int var_11 = 172609011062088326LL;
unsigned short var_12 = (unsigned short)20087;
int zero = 0;
int var_13 = 621228714;
unsigned int var_14 = 591983266U;
unsigned int var_15 = 3393583860U;
unsigned char var_16 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
