#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3531623110000031624LL;
unsigned int var_3 = 4006626325U;
unsigned short var_6 = (unsigned short)5409;
unsigned int var_7 = 3652843559U;
unsigned long long int var_14 = 4555229214616569417ULL;
unsigned char var_17 = (unsigned char)239;
int zero = 0;
signed char var_20 = (signed char)-76;
short var_21 = (short)-16194;
long long int var_22 = 8112936057365849434LL;
unsigned char var_23 = (unsigned char)58;
unsigned long long int var_24 = 16060936370185653293ULL;
unsigned short arr_0 [13] [13] ;
signed char arr_1 [13] ;
unsigned short arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)55578;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)830;
}

void checksum() {
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
