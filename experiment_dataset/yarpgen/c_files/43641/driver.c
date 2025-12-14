#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)250;
int var_4 = -96553263;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 7650353862299420267ULL;
unsigned short var_7 = (unsigned short)23561;
signed char var_8 = (signed char)40;
int zero = 0;
long long int var_10 = -4182346081599848938LL;
unsigned short var_11 = (unsigned short)54687;
unsigned short var_12 = (unsigned short)31285;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)20894;
unsigned short var_15 = (unsigned short)53001;
signed char arr_0 [18] ;
short arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-20626;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
