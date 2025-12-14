#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28033;
unsigned int var_1 = 3385628243U;
int var_3 = 1076136455;
unsigned int var_4 = 2243099014U;
unsigned short var_7 = (unsigned short)23056;
signed char var_8 = (signed char)-40;
unsigned int var_10 = 1751240614U;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-29630;
unsigned long long int var_13 = 128592357093599646ULL;
short var_14 = (short)-30710;
unsigned short var_15 = (unsigned short)60649;
unsigned long long int var_16 = 12377449017043248560ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
