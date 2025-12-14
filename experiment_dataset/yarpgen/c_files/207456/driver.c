#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1090649961;
long long int var_2 = -1633940515922079578LL;
_Bool var_4 = (_Bool)0;
int var_6 = 572150314;
_Bool var_7 = (_Bool)1;
long long int var_8 = -1395369130590542667LL;
int var_9 = -2132737424;
unsigned char var_10 = (unsigned char)253;
long long int var_11 = 6445377851854975360LL;
int zero = 0;
unsigned char var_12 = (unsigned char)80;
int var_13 = -1145429880;
long long int var_14 = 8782838884196842879LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
