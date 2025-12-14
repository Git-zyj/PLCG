#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16179095959215186082ULL;
unsigned int var_2 = 523497892U;
unsigned long long int var_5 = 4207976089637018104ULL;
unsigned short var_7 = (unsigned short)29677;
unsigned int var_10 = 4035176946U;
unsigned int var_12 = 2103106742U;
unsigned short var_18 = (unsigned short)55921;
unsigned short var_19 = (unsigned short)49287;
int zero = 0;
unsigned int var_20 = 1755506988U;
unsigned long long int var_21 = 14163220092248995893ULL;
unsigned int var_22 = 3212779112U;
unsigned long long int var_23 = 16385836903677711873ULL;
unsigned int var_24 = 1839398901U;
long long int var_25 = 4662180642949888942LL;
unsigned long long int var_26 = 17321760184932307974ULL;
unsigned short var_27 = (unsigned short)28390;
unsigned short var_28 = (unsigned short)51698;
unsigned long long int var_29 = 12687433153933269930ULL;
unsigned long long int var_30 = 761717356447233476ULL;
unsigned int var_31 = 3614896677U;
long long int arr_0 [12] [12] ;
unsigned int arr_1 [12] [12] ;
unsigned int arr_7 [14] ;
unsigned int arr_8 [14] ;
unsigned long long int arr_19 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 2574682487201481567LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 734878005U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 4024524917U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 2023993832U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 1694351493165412472ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
