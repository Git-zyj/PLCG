#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned int var_5 = 291537398U;
signed char var_7 = (signed char)31;
long long int var_10 = 7929332966552032945LL;
signed char var_16 = (signed char)-126;
unsigned int var_18 = 2642074197U;
int zero = 0;
unsigned long long int var_19 = 15004222247642071970ULL;
signed char var_20 = (signed char)-50;
unsigned long long int var_21 = 12000726809057009992ULL;
unsigned int var_22 = 340778323U;
unsigned long long int var_23 = 7022558312574505903ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
