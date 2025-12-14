#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3537196436U;
signed char var_5 = (signed char)32;
unsigned char var_6 = (unsigned char)165;
signed char var_8 = (signed char)0;
signed char var_9 = (signed char)-85;
signed char var_10 = (signed char)121;
unsigned long long int var_11 = 3812018939514078106ULL;
unsigned long long int var_13 = 16426084666111846033ULL;
short var_15 = (short)16430;
int zero = 0;
unsigned char var_18 = (unsigned char)247;
unsigned short var_19 = (unsigned short)42630;
unsigned long long int var_20 = 14226692405098392228ULL;
unsigned short var_21 = (unsigned short)3191;
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
