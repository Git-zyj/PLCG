#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6713312585822195916LL;
signed char var_7 = (signed char)108;
unsigned int var_11 = 1159430678U;
unsigned short var_13 = (unsigned short)54830;
int var_14 = 179209017;
short var_15 = (short)-30819;
signed char var_16 = (signed char)8;
unsigned char var_18 = (unsigned char)212;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 8326119429590681882LL;
unsigned short var_21 = (unsigned short)54189;
void init() {
}

void checksum() {
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
