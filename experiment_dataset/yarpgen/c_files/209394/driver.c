#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2696066764057473014LL;
unsigned char var_2 = (unsigned char)206;
signed char var_7 = (signed char)-60;
unsigned char var_8 = (unsigned char)0;
int var_9 = -355087289;
unsigned char var_10 = (unsigned char)39;
unsigned long long int var_12 = 10125751407776011402ULL;
signed char var_15 = (signed char)122;
int zero = 0;
unsigned char var_16 = (unsigned char)48;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 11990594038144622293ULL;
void init() {
}

void checksum() {
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
