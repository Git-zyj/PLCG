#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1193649708U;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)20;
long long int var_12 = 3688786775287360665LL;
unsigned short var_14 = (unsigned short)31463;
unsigned long long int var_17 = 3464274543390123835ULL;
int zero = 0;
unsigned int var_18 = 794774961U;
unsigned int var_19 = 2261103853U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)100;
short var_22 = (short)-1458;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
