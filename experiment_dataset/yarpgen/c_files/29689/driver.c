#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15073019910882682425ULL;
signed char var_4 = (signed char)3;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-26417;
unsigned short var_8 = (unsigned short)50980;
int var_12 = 435203657;
unsigned char var_14 = (unsigned char)192;
long long int var_15 = 1718430594371083920LL;
int var_16 = -293915581;
unsigned long long int var_17 = 8358022172420977818ULL;
int zero = 0;
signed char var_19 = (signed char)-3;
signed char var_20 = (signed char)-116;
long long int var_21 = 5232948225548054948LL;
unsigned short var_22 = (unsigned short)54228;
unsigned long long int var_23 = 7121053484044525443ULL;
_Bool var_24 = (_Bool)0;
short arr_1 [17] ;
short arr_2 [17] [17] [17] ;
unsigned long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)30073 : (short)3498;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)21815 : (short)11643;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 11715786533858289486ULL : 16216481170939902137ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
