#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1809099686860131162LL;
unsigned short var_1 = (unsigned short)9271;
_Bool var_2 = (_Bool)1;
short var_3 = (short)1309;
unsigned long long int var_4 = 12469423097681561789ULL;
unsigned char var_5 = (unsigned char)5;
unsigned char var_6 = (unsigned char)15;
int var_7 = -1703375160;
signed char var_8 = (signed char)126;
unsigned char var_9 = (unsigned char)53;
int zero = 0;
unsigned short var_10 = (unsigned short)10440;
unsigned char var_11 = (unsigned char)120;
long long int var_12 = 8759769465805233151LL;
long long int var_13 = 441503561177129504LL;
unsigned char var_14 = (unsigned char)229;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1349711478898604431ULL;
signed char var_17 = (signed char)63;
int var_18 = -1770235250;
unsigned long long int var_19 = 3912088368428628114ULL;
signed char var_20 = (signed char)59;
short arr_0 [21] ;
unsigned int arr_1 [21] [21] ;
unsigned char arr_3 [21] ;
_Bool arr_6 [21] [21] [21] ;
signed char arr_9 [21] [21] [21] [21] ;
int arr_10 [21] [21] [21] [21] ;
_Bool arr_11 [21] [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)18354;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 563409964U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1109323717 : 1345779206;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
