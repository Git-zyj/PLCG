#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned char var_1 = (unsigned char)63;
int var_2 = -2034309497;
int var_3 = 2065042647;
int var_4 = -2020577527;
unsigned short var_5 = (unsigned short)24182;
unsigned int var_6 = 3441613397U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)59;
long long int var_9 = 2474056519668835600LL;
signed char var_10 = (signed char)-58;
signed char var_11 = (signed char)19;
int zero = 0;
unsigned short var_12 = (unsigned short)6505;
short var_13 = (short)20311;
unsigned int var_14 = 2080283439U;
unsigned long long int var_15 = 11729773358846681270ULL;
unsigned short var_16 = (unsigned short)25055;
short var_17 = (short)27923;
unsigned long long int var_18 = 9230065684704154066ULL;
signed char var_19 = (signed char)-42;
int var_20 = -2033978159;
short var_21 = (short)10088;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)225;
unsigned char var_24 = (unsigned char)199;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)65;
unsigned long long int var_27 = 3989304230598444154ULL;
short var_28 = (short)14340;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)1373;
unsigned short var_32 = (unsigned short)31900;
int var_33 = 1813307532;
unsigned char var_34 = (unsigned char)216;
int var_35 = -761211989;
unsigned long long int var_36 = 1142053221419152536ULL;
unsigned short var_37 = (unsigned short)27457;
unsigned long long int arr_2 [17] [17] [17] ;
unsigned short arr_5 [17] [17] ;
unsigned short arr_6 [17] [17] [17] ;
short arr_8 [17] [17] ;
short arr_11 [17] [17] [17] [17] [17] [17] ;
short arr_12 [17] [17] [17] [17] ;
unsigned short arr_18 [19] [19] ;
int arr_19 [19] ;
unsigned short arr_20 [19] [19] [19] ;
signed char arr_23 [19] [19] [19] [19] ;
short arr_24 [19] ;
long long int arr_25 [19] [19] [19] [19] ;
short arr_26 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4052248891278516101ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)20475;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)47562 : (unsigned short)34627;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-28646;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)4066 : (short)-4484;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-4275 : (short)-4986;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)62820;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 1094993304;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)60252 : (unsigned short)8430;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)31 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (short)4759;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -5096051543251446144LL : 8411234147742369022LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)27611 : (short)27912;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
