#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9274;
unsigned char var_3 = (unsigned char)207;
unsigned char var_4 = (unsigned char)19;
signed char var_5 = (signed char)127;
long long int var_6 = 6840538880186188114LL;
long long int var_7 = -2275463628978624753LL;
unsigned long long int var_8 = 938220383240246885ULL;
int var_9 = 1850257762;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 3554769480U;
int zero = 0;
int var_13 = 905123667;
long long int var_14 = -1739551380878261900LL;
unsigned short var_15 = (unsigned short)7875;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 4686456385420708381ULL;
unsigned short var_18 = (unsigned short)37951;
unsigned int var_19 = 3061606875U;
long long int var_20 = 6699010321828468036LL;
signed char var_21 = (signed char)-39;
int var_22 = -467041208;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)33449;
short var_27 = (short)-20488;
unsigned short var_28 = (unsigned short)56948;
long long int arr_0 [15] [15] ;
long long int arr_3 [19] [19] ;
_Bool arr_4 [19] [19] [19] ;
unsigned char arr_6 [19] [19] [19] ;
short arr_10 [19] ;
int arr_16 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_14 [19] [19] [19] [19] [19] ;
unsigned int arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -7542646923550941254LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 6884012566899425946LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (short)-27090;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -310382407;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)49587 : (unsigned short)27241;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 3551309987U;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
