#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
short var_1 = (short)-9093;
int var_2 = 1333482714;
long long int var_3 = 366597745654275949LL;
long long int var_4 = -4390306069858833975LL;
unsigned short var_5 = (unsigned short)37562;
int var_7 = 695329250;
short var_8 = (short)26403;
int zero = 0;
unsigned short var_10 = (unsigned short)20019;
unsigned short var_11 = (unsigned short)44964;
signed char var_12 = (signed char)-102;
long long int var_13 = -5088641545862492371LL;
short var_14 = (short)-31877;
signed char var_15 = (signed char)-23;
long long int var_16 = 3366139373403603408LL;
_Bool arr_0 [12] ;
_Bool arr_1 [12] ;
short arr_2 [12] ;
long long int arr_3 [12] ;
_Bool arr_4 [12] ;
short arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)6489;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1390177324911950059LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)14678;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
