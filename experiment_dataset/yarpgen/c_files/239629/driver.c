#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2683552141951762891LL;
short var_1 = (short)-5167;
int var_2 = -958679891;
long long int var_4 = -8860841828068748379LL;
signed char var_8 = (signed char)-51;
int zero = 0;
int var_11 = -674653330;
unsigned short var_12 = (unsigned short)16966;
long long int var_13 = -7240878427862127818LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
