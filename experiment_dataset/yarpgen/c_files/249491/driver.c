#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18259103247136033128ULL;
int var_2 = -1282250619;
short var_3 = (short)8164;
int var_4 = 50398130;
long long int var_5 = 8629470609640544006LL;
long long int var_6 = -835578703434032502LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 18145894813984157609ULL;
int var_9 = -1226093863;
int var_10 = -1684173008;
unsigned short var_11 = (unsigned short)1358;
int var_12 = -561122795;
unsigned long long int var_13 = 6239408456285772746ULL;
unsigned short var_14 = (unsigned short)34326;
unsigned short var_16 = (unsigned short)51655;
int zero = 0;
short var_17 = (short)6263;
short var_18 = (short)-7918;
unsigned long long int var_19 = 7492498706429237617ULL;
int var_20 = 1794641776;
int var_21 = -1116615688;
short var_22 = (short)32306;
unsigned long long int var_23 = 13684296600126461245ULL;
long long int var_24 = -3817434460999196378LL;
unsigned short var_25 = (unsigned short)16416;
int var_26 = -1574267487;
int var_27 = -1669164162;
long long int var_28 = 5748950023758107327LL;
_Bool arr_1 [16] ;
_Bool arr_9 [13] ;
short arr_11 [13] [13] [13] ;
unsigned short arr_2 [16] ;
int arr_15 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-9358;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)59273;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -413693709;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
