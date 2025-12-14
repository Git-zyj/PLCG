#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-69;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_5 = -206234380;
unsigned long long int var_6 = 1952150559222650212ULL;
int var_7 = -234403003;
signed char var_8 = (signed char)-124;
unsigned long long int var_9 = 5013259626236825676ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)62;
long long int var_12 = -6520092702806365879LL;
signed char var_13 = (signed char)4;
long long int var_14 = -1606423098471741326LL;
long long int var_15 = -7559827711397529980LL;
int zero = 0;
unsigned char var_16 = (unsigned char)171;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)90;
unsigned char var_19 = (unsigned char)247;
unsigned long long int var_20 = 1031401732357439039ULL;
signed char var_21 = (signed char)15;
signed char var_22 = (signed char)-59;
int var_23 = 1830368103;
signed char var_24 = (signed char)105;
unsigned int var_25 = 4216456309U;
signed char var_26 = (signed char)76;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)-123;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 3173063723U;
_Bool var_32 = (_Bool)1;
unsigned char var_33 = (unsigned char)77;
signed char var_34 = (signed char)25;
long long int var_35 = -5353631733348886122LL;
unsigned char var_36 = (unsigned char)38;
signed char var_37 = (signed char)-9;
signed char var_38 = (signed char)98;
int var_39 = -1894063729;
signed char arr_0 [21] ;
signed char arr_1 [21] ;
int arr_3 [21] [21] ;
unsigned int arr_6 [21] [21] [21] ;
long long int arr_7 [21] [21] ;
long long int arr_10 [20] ;
unsigned int arr_15 [20] [20] [20] ;
signed char arr_25 [20] [20] [20] ;
_Bool arr_4 [21] [21] [21] ;
int arr_5 [21] ;
signed char arr_8 [21] ;
unsigned long long int arr_11 [20] ;
unsigned int arr_12 [20] ;
signed char arr_13 [20] [20] ;
unsigned long long int arr_37 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -1274156959;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 895607963U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 4081764094311270183LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3479493643390123218LL : -1075715699695636929LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1217107821U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-75 : (signed char)-120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 1785625473;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 7679439972826447459ULL : 1105155411784595590ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1347689116U : 3485676211U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-77 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 17486389553654873988ULL : 13439007998183908479ULL;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
