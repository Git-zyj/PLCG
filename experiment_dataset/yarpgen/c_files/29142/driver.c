#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20786;
unsigned char var_4 = (unsigned char)202;
int var_5 = -908585327;
unsigned int var_7 = 296541540U;
unsigned int var_8 = 2690801664U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_17 = 4582687221765412664ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)215;
short var_20 = (short)-28440;
unsigned long long int var_21 = 12519310744560721260ULL;
short var_22 = (short)10280;
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
