#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7464052556944221261LL;
unsigned int var_1 = 154902108U;
unsigned long long int var_2 = 7161214079905943527ULL;
unsigned short var_4 = (unsigned short)11915;
unsigned int var_5 = 816567045U;
unsigned char var_8 = (unsigned char)187;
long long int var_9 = 1250637166453052851LL;
long long int var_11 = 47028576058932237LL;
unsigned char var_13 = (unsigned char)110;
int zero = 0;
signed char var_15 = (signed char)38;
unsigned long long int var_16 = 9940308864849291765ULL;
unsigned short var_17 = (unsigned short)36253;
short var_18 = (short)-23742;
void init() {
}

void checksum() {
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
