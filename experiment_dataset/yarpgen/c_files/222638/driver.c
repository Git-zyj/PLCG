#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6509892446503621846LL;
short var_2 = (short)-24519;
unsigned char var_4 = (unsigned char)61;
unsigned long long int var_5 = 13982373736702839639ULL;
short var_6 = (short)-25993;
unsigned long long int var_7 = 3508135440097443905ULL;
int var_10 = -1307620395;
unsigned int var_11 = 2696632707U;
long long int var_12 = -1113539671039711117LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 1160409424;
short var_18 = (short)-8853;
unsigned long long int var_19 = 8092578781311008354ULL;
short var_20 = (short)26144;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 211471942U;
long long int var_23 = 444925314383346500LL;
long long int var_24 = 2682909535002337480LL;
long long int var_25 = 4783549194252796151LL;
long long int var_26 = -2834758032259618629LL;
unsigned long long int var_27 = 7913680375167996388ULL;
long long int var_28 = -3807138249490488753LL;
int var_29 = -262346798;
short var_30 = (short)-27500;
long long int var_31 = -3104890628831343638LL;
unsigned char var_32 = (unsigned char)86;
_Bool var_33 = (_Bool)0;
int var_34 = 1728284358;
unsigned long long int var_35 = 14335012468207509216ULL;
_Bool var_36 = (_Bool)0;
short var_37 = (short)31958;
int var_38 = -55579314;
unsigned long long int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
int arr_3 [24] ;
unsigned int arr_4 [24] ;
long long int arr_5 [24] [24] [24] ;
int arr_6 [24] [24] [24] ;
long long int arr_7 [24] [24] ;
unsigned int arr_8 [24] [24] [24] [24] ;
long long int arr_10 [24] ;
short arr_11 [24] ;
unsigned char arr_12 [24] [24] [24] ;
unsigned char arr_13 [24] [24] [24] [24] [24] ;
int arr_14 [24] [24] [24] [24] ;
short arr_15 [24] [24] [24] [24] ;
_Bool arr_17 [24] [24] ;
short arr_19 [24] ;
unsigned int arr_20 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 3032206169567495364ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 81746868889871026ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -200658644;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2369076231U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1448372168732875380LL : -2453585164099517519LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -974189358;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 7176027217850604930LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 49093218U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 6842047979835115040LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)17472;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 516740426;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)-10934;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (short)-8812;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 152705854U;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
