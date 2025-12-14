#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
long long int var_3 = 2870558741461325495LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 3674701238652897315ULL;
signed char var_12 = (signed char)108;
unsigned short var_13 = (unsigned short)29146;
unsigned char var_14 = (unsigned char)176;
int zero = 0;
int var_18 = 1556774479;
unsigned char var_19 = (unsigned char)114;
unsigned long long int var_20 = 12178561267861298289ULL;
int var_21 = -792265743;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
