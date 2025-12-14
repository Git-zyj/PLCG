#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9173328911686646701LL;
unsigned int var_4 = 134071186U;
short var_11 = (short)9769;
unsigned char var_13 = (unsigned char)186;
int var_14 = 1947340297;
int zero = 0;
short var_19 = (short)12617;
long long int var_20 = 4905332534987012298LL;
unsigned int var_21 = 3512657201U;
int var_22 = 946438159;
short var_23 = (short)29192;
unsigned char var_24 = (unsigned char)131;
unsigned char arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)54;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
