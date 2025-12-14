#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
signed char var_1 = (signed char)108;
unsigned int var_3 = 2838054697U;
long long int var_4 = -7862365390002607905LL;
short var_7 = (short)25511;
int var_9 = 1405907654;
unsigned char var_10 = (unsigned char)215;
int zero = 0;
short var_11 = (short)-26313;
short var_12 = (short)21642;
unsigned int var_13 = 387742232U;
unsigned int var_14 = 358465423U;
signed char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)56;
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
