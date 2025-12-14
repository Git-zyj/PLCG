#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
unsigned long long int var_1 = 6745618431410561562ULL;
unsigned char var_4 = (unsigned char)238;
short var_5 = (short)-15631;
signed char var_7 = (signed char)-111;
unsigned long long int var_8 = 6936282658009040840ULL;
unsigned long long int var_10 = 10591337219497175078ULL;
unsigned long long int var_11 = 9880226639361084272ULL;
unsigned int var_12 = 237128761U;
short var_13 = (short)-5011;
long long int var_15 = 3856620031896502243LL;
long long int var_17 = -3048658935212709642LL;
unsigned char var_19 = (unsigned char)175;
int zero = 0;
unsigned char var_20 = (unsigned char)253;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
long long int var_24 = 6758992837940884219LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
