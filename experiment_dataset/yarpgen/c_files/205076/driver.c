#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)85;
long long int var_4 = -7140473332385792955LL;
int var_5 = -2068719925;
signed char var_8 = (signed char)-1;
int var_10 = 458652710;
signed char var_11 = (signed char)90;
int var_13 = -1303410329;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 2825885907302208534ULL;
short var_18 = (short)309;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
