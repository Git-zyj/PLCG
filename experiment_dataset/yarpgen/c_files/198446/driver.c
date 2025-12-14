#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6792713988708228638LL;
unsigned long long int var_1 = 4743016940287048041ULL;
unsigned char var_3 = (unsigned char)66;
long long int var_4 = 1413031926548776645LL;
long long int var_5 = 3142490773697420615LL;
unsigned char var_6 = (unsigned char)155;
unsigned char var_7 = (unsigned char)59;
long long int var_8 = -214673789963852450LL;
int var_9 = 2061606020;
long long int var_10 = -2156355399619416951LL;
long long int var_11 = -989313546287337219LL;
long long int var_12 = -16027826367403267LL;
long long int var_14 = -2481161080358287375LL;
unsigned char var_15 = (unsigned char)88;
unsigned long long int var_16 = 8802784308147048776ULL;
long long int var_17 = -5321264889202716862LL;
int var_18 = -1724290946;
int zero = 0;
long long int var_19 = 1280947122203819117LL;
unsigned char var_20 = (unsigned char)246;
long long int var_21 = -8603531170486792705LL;
long long int var_22 = 6149383694316455618LL;
unsigned char var_23 = (unsigned char)158;
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
