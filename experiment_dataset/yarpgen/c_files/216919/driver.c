#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
long long int var_1 = -6555021894942529409LL;
signed char var_3 = (signed char)-42;
signed char var_4 = (signed char)127;
long long int var_5 = 3506618932543572217LL;
long long int var_6 = -296041361439473192LL;
unsigned short var_7 = (unsigned short)8423;
long long int var_9 = 3189434026011228932LL;
signed char var_11 = (signed char)-64;
long long int var_12 = -1421391006822859986LL;
int zero = 0;
long long int var_13 = -3280036277319591930LL;
signed char var_14 = (signed char)19;
signed char var_15 = (signed char)114;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)50;
long long int var_18 = -290899785592564398LL;
unsigned int var_19 = 3259279472U;
unsigned long long int var_20 = 1176932991384829263ULL;
signed char var_21 = (signed char)-11;
unsigned short var_22 = (unsigned short)56911;
int var_23 = -795877298;
unsigned long long int var_24 = 9957257548047201306ULL;
long long int var_25 = 8910885893186635126LL;
int var_26 = 1294872669;
unsigned long long int var_27 = 15619928206632760089ULL;
signed char var_28 = (signed char)-41;
unsigned long long int var_29 = 14477423248714618669ULL;
signed char var_30 = (signed char)44;
long long int var_31 = 2099901767956498716LL;
signed char arr_0 [15] [15] ;
signed char arr_1 [15] ;
signed char arr_2 [15] ;
int arr_3 [10] ;
unsigned int arr_4 [10] [10] ;
signed char arr_5 [10] ;
long long int arr_8 [10] ;
int arr_9 [10] ;
signed char arr_10 [10] ;
long long int arr_14 [10] ;
signed char arr_16 [10] ;
long long int arr_19 [10] ;
long long int arr_20 [10] [10] [10] [10] ;
int arr_24 [10] [10] [10] ;
signed char arr_35 [24] ;
unsigned int arr_39 [24] [24] [24] ;
int arr_43 [24] [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_7 [10] [10] ;
signed char arr_12 [10] [10] ;
long long int arr_13 [10] [10] ;
unsigned long long int arr_17 [10] ;
long long int arr_29 [10] [10] [10] [10] ;
long long int arr_33 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -1769170654;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 1676742057U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 902254494198135921LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 2033757516;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 6530483150056421373LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = -2574625244404369611LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 7446075337404794759LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2077966185 : 1259744774;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3037456951U : 3067129030U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? -689559281 : -628976810;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 17947936399800700968ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = -4449291356127942976LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 10187349770214701573ULL : 9115110335026758116ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -3376502437447290851LL : 2618936107903522432LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7845375465830956967LL : -3742594812553315346LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
