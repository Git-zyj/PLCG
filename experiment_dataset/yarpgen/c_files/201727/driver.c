#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1242868445326432459LL;
unsigned int var_1 = 1121648102U;
long long int var_2 = 5337432867766566341LL;
unsigned long long int var_4 = 3673784682464738963ULL;
unsigned short var_6 = (unsigned short)9139;
long long int var_7 = -7058142977626560556LL;
long long int var_8 = -7706670016555333395LL;
unsigned char var_10 = (unsigned char)96;
unsigned char var_11 = (unsigned char)32;
int var_12 = 220314089;
unsigned short var_13 = (unsigned short)21164;
unsigned int var_14 = 4133107130U;
unsigned int var_15 = 3231017678U;
long long int var_16 = 6586143220635439035LL;
int var_17 = 1899067393;
signed char var_18 = (signed char)80;
int zero = 0;
unsigned short var_20 = (unsigned short)24408;
unsigned long long int var_21 = 10275356190459456415ULL;
signed char var_22 = (signed char)47;
void init() {
}

void checksum() {
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
