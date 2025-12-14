#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3758616898U;
unsigned char var_1 = (unsigned char)235;
unsigned int var_2 = 3784273283U;
long long int var_3 = -2064713470850790061LL;
unsigned short var_4 = (unsigned short)43078;
int var_6 = -474329307;
long long int var_7 = 1979431720155438319LL;
unsigned short var_8 = (unsigned short)24400;
int zero = 0;
short var_11 = (short)-29356;
_Bool var_12 = (_Bool)1;
int var_13 = 1048020341;
signed char var_14 = (signed char)-85;
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
