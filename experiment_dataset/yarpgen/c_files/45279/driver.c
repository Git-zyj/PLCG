#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4187021709U;
unsigned char var_1 = (unsigned char)84;
unsigned short var_7 = (unsigned short)59273;
signed char var_8 = (signed char)35;
signed char var_12 = (signed char)11;
short var_13 = (short)26142;
short var_15 = (short)20853;
int zero = 0;
int var_19 = -1684392480;
unsigned int var_20 = 4100133476U;
long long int var_21 = -5605325208783365658LL;
unsigned long long int var_22 = 9747898673237154194ULL;
signed char var_23 = (signed char)32;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 1696223873;
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
