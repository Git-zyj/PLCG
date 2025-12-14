#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2131264090;
unsigned short var_6 = (unsigned short)48740;
short var_10 = (short)-12062;
int var_12 = -2126269736;
int zero = 0;
unsigned int var_20 = 2029543232U;
unsigned long long int var_21 = 7546419610758608684ULL;
short var_22 = (short)-13031;
unsigned short var_23 = (unsigned short)13474;
int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -603988697;
}

void checksum() {
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
