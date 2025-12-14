#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10329;
unsigned long long int var_2 = 15929501197604403040ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)10;
unsigned long long int var_8 = 9977294255188724035ULL;
long long int var_11 = -4938284170540521985LL;
unsigned int var_12 = 370083525U;
int var_13 = 349987083;
unsigned char var_15 = (unsigned char)18;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)60593;
long long int var_19 = 5474949405709473419LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)23929;
int var_22 = -1878278155;
unsigned long long int var_23 = 17587050295772639535ULL;
int var_24 = -337576980;
unsigned long long int var_25 = 10670353012251165030ULL;
long long int var_26 = -9057447812324042708LL;
signed char arr_1 [12] ;
short arr_4 [22] ;
unsigned long long int arr_8 [22] [22] ;
long long int arr_10 [22] [22] [22] [22] ;
long long int arr_2 [12] ;
_Bool arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)28332;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 16358969031910154172ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 7867444522656313858LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -4538586151183276150LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
