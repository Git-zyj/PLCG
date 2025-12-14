#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4288;
signed char var_2 = (signed char)55;
short var_4 = (short)9880;
short var_5 = (short)23916;
short var_6 = (short)-25652;
unsigned short var_7 = (unsigned short)14643;
unsigned short var_8 = (unsigned short)11717;
unsigned long long int var_10 = 1614203210908029294ULL;
unsigned char var_12 = (unsigned char)7;
unsigned long long int var_13 = 3051799705376902223ULL;
unsigned short var_14 = (unsigned short)62538;
int zero = 0;
unsigned long long int var_15 = 6068870516150449129ULL;
unsigned short var_16 = (unsigned short)7336;
unsigned short var_17 = (unsigned short)20498;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -8644957859817665251LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
