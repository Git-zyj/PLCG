#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11546045175062565078ULL;
unsigned char var_2 = (unsigned char)109;
unsigned int var_5 = 2102694062U;
long long int var_6 = -1051042382442283661LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)63155;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)6;
int zero = 0;
long long int var_12 = -5649600336129620719LL;
unsigned short var_13 = (unsigned short)28662;
unsigned int var_14 = 2810751349U;
short var_15 = (short)-13998;
unsigned int var_16 = 1278977603U;
unsigned short var_17 = (unsigned short)22706;
int var_18 = 992430790;
unsigned long long int var_19 = 10641910088742572036ULL;
unsigned int var_20 = 976131676U;
unsigned short var_21 = (unsigned short)19156;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 18259125601679906676ULL;
unsigned int var_24 = 3921375057U;
_Bool var_25 = (_Bool)0;
short arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
_Bool arr_4 [13] [13] [13] ;
unsigned int arr_5 [13] ;
unsigned long long int arr_6 [13] [13] [13] [13] ;
unsigned char arr_8 [13] [13] [13] [13] [13] [13] ;
_Bool arr_13 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)6945;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 14785227667470249110ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 872171951U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 218906269364304681ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
