#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1942387485U;
short var_1 = (short)-25477;
long long int var_3 = -2926909337147907916LL;
unsigned short var_4 = (unsigned short)9822;
unsigned char var_5 = (unsigned char)150;
unsigned short var_6 = (unsigned short)9247;
short var_7 = (short)-21415;
signed char var_8 = (signed char)-73;
unsigned long long int var_9 = 3632678423230751806ULL;
int zero = 0;
unsigned long long int var_10 = 4139500059383626437ULL;
int var_11 = -1510150294;
signed char var_12 = (signed char)-47;
unsigned long long int var_13 = 12141040165982435047ULL;
short var_14 = (short)22559;
unsigned int var_15 = 2653815944U;
unsigned char var_16 = (unsigned char)35;
unsigned char var_17 = (unsigned char)77;
unsigned char var_18 = (unsigned char)117;
unsigned char var_19 = (unsigned char)203;
unsigned long long int var_20 = 6975922076490998815ULL;
unsigned char var_21 = (unsigned char)252;
unsigned char var_22 = (unsigned char)203;
signed char var_23 = (signed char)-108;
_Bool arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
unsigned char arr_3 [14] [14] ;
int arr_4 [14] ;
short arr_6 [14] [14] [14] ;
long long int arr_11 [14] [14] ;
unsigned char arr_12 [14] [14] [14] [14] [14] ;
int arr_14 [17] ;
signed char arr_15 [17] [17] ;
signed char arr_19 [14] ;
long long int arr_23 [20] ;
signed char arr_25 [20] [20] ;
unsigned int arr_27 [20] ;
int arr_8 [14] [14] [14] [14] ;
unsigned long long int arr_13 [14] [14] ;
unsigned char arr_16 [17] ;
signed char arr_20 [14] ;
unsigned int arr_21 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 49936047;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-1045;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = 3475451246437138155LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)92 : (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = -213852983;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = -3444234283572413960LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 4067265834U : 4097345142U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 856899634 : -1332898198;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 4033181845779468782ULL : 14471164704740161312ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)249 : (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = 1408706014U;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
