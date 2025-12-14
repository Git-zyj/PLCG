#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 787112768U;
signed char var_2 = (signed char)-17;
long long int var_3 = -8508931618287684998LL;
unsigned int var_6 = 2550015414U;
signed char var_9 = (signed char)38;
signed char var_10 = (signed char)-78;
unsigned char var_11 = (unsigned char)63;
_Bool var_12 = (_Bool)1;
int var_13 = 1818228659;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)7354;
_Bool var_16 = (_Bool)0;
short var_17 = (short)17786;
signed char var_18 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
