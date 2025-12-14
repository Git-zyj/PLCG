#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned int var_1 = 1917842000U;
unsigned short var_2 = (unsigned short)27021;
short var_3 = (short)5040;
unsigned long long int var_4 = 18205467798599186454ULL;
unsigned char var_5 = (unsigned char)161;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)51185;
unsigned short var_8 = (unsigned short)22112;
short var_9 = (short)-11008;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 1795829498U;
long long int var_16 = 3409836126228629546LL;
int zero = 0;
unsigned int var_17 = 592103313U;
unsigned int var_18 = 2383962413U;
short var_19 = (short)-25250;
unsigned long long int var_20 = 10928754310430344641ULL;
unsigned long long int var_21 = 12352337577761128831ULL;
unsigned long long int var_22 = 2894374614733084599ULL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 4168683133080570899ULL;
long long int var_25 = 4864338638795791982LL;
unsigned int var_26 = 712890548U;
unsigned int var_27 = 1122014223U;
long long int var_28 = 7038893914927557750LL;
unsigned long long int var_29 = 406313846458008746ULL;
unsigned int var_30 = 1464525138U;
unsigned long long int var_31 = 11023620439834215784ULL;
int var_32 = 1925789393;
unsigned short var_33 = (unsigned short)63232;
signed char var_34 = (signed char)40;
long long int var_35 = -37422996077648727LL;
unsigned long long int var_36 = 1142746293801803154ULL;
long long int var_37 = -4813980121207402156LL;
_Bool arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
unsigned short arr_2 [21] ;
short arr_5 [21] [21] [21] [21] ;
signed char arr_6 [21] [21] [21] ;
unsigned int arr_7 [21] [21] [21] [21] [21] [21] ;
long long int arr_8 [21] [21] [21] [21] ;
short arr_9 [21] [21] [21] [21] [21] ;
long long int arr_10 [21] ;
unsigned int arr_15 [21] [21] [21] [21] ;
_Bool arr_16 [21] [21] [21] ;
unsigned long long int arr_18 [21] [21] [21] [21] ;
int arr_19 [21] [21] [21] [21] ;
unsigned char arr_27 [17] [17] [17] ;
long long int arr_31 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 4707053107071431615ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)30199;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-23124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 3158264462U : 2192465459U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -4804787970769898123LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-25367;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 4467924712038928877LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 2796142131U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 15978429533642797658ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = -570081596;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_31 [i_0] = 5889438399555623062LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
