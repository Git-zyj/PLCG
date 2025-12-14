#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1918758029;
unsigned char var_1 = (unsigned char)220;
unsigned short var_2 = (unsigned short)40658;
unsigned char var_3 = (unsigned char)252;
unsigned char var_5 = (unsigned char)38;
unsigned short var_6 = (unsigned short)4870;
signed char var_7 = (signed char)80;
int var_9 = 1739536568;
short var_11 = (short)-10506;
unsigned char var_13 = (unsigned char)45;
unsigned long long int var_14 = 5187638963814587467ULL;
signed char var_15 = (signed char)-92;
int zero = 0;
unsigned short var_16 = (unsigned short)36165;
long long int var_17 = 4634802095794333050LL;
unsigned long long int var_18 = 10972505380780188252ULL;
unsigned char var_19 = (unsigned char)109;
unsigned char var_20 = (unsigned char)115;
int var_21 = 896934448;
short var_22 = (short)22668;
unsigned long long int var_23 = 7252225277594864310ULL;
int var_24 = -685104314;
unsigned char var_25 = (unsigned char)41;
unsigned int var_26 = 3918549196U;
unsigned char var_27 = (unsigned char)75;
unsigned short var_28 = (unsigned short)909;
unsigned int var_29 = 2472164387U;
int var_30 = 73209146;
int var_31 = -654744831;
unsigned int var_32 = 1279615535U;
unsigned char var_33 = (unsigned char)31;
unsigned long long int var_34 = 2411349324666143488ULL;
unsigned char var_35 = (unsigned char)194;
short var_36 = (short)-2700;
unsigned short arr_1 [18] [18] ;
int arr_3 [18] ;
unsigned long long int arr_5 [18] [18] ;
unsigned char arr_6 [18] [18] [18] ;
signed char arr_8 [18] [18] ;
unsigned int arr_10 [18] [18] [18] ;
int arr_14 [18] [18] ;
unsigned int arr_2 [18] ;
long long int arr_15 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)15006 : (unsigned short)51592;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1365334035 : 1146888753;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 8878876527557226636ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)147 : (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3009937054U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = 1166078462;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 525593329U : 3641202265U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -2559375107604032828LL : 4004643018071553390LL;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
