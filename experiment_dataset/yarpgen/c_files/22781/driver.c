#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6287603718906498719LL;
unsigned short var_1 = (unsigned short)37243;
long long int var_3 = -6581186089083508115LL;
long long int var_4 = -4932420014379301946LL;
long long int var_5 = -3623051741903672105LL;
unsigned char var_6 = (unsigned char)69;
int var_7 = -340463343;
int var_8 = 1938826109;
int var_9 = -698318588;
int var_11 = 195743189;
long long int var_12 = 8240219835008016281LL;
unsigned char var_13 = (unsigned char)54;
unsigned char var_17 = (unsigned char)19;
int var_18 = 454929534;
int zero = 0;
unsigned char var_19 = (unsigned char)164;
unsigned char var_20 = (unsigned char)153;
int var_21 = -1819723444;
unsigned char var_22 = (unsigned char)156;
long long int var_23 = 1646151240577105900LL;
long long int var_24 = -739805289897742728LL;
long long int var_25 = -5356283690858337487LL;
unsigned short var_26 = (unsigned short)54058;
int var_27 = -1347268068;
unsigned short arr_0 [14] ;
int arr_1 [14] [14] ;
unsigned short arr_6 [14] [14] [14] ;
unsigned short arr_2 [14] ;
int arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)42628;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -1672075641;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)15439;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)49531;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 290112364;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
