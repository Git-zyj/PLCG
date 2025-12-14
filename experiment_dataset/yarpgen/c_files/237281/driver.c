#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2126653180238904983LL;
unsigned char var_1 = (unsigned char)90;
short var_2 = (short)20978;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-73;
long long int var_5 = -8338237332190036586LL;
unsigned long long int var_6 = 3959134293106827236ULL;
unsigned long long int var_7 = 13585666230433251683ULL;
int var_8 = -1264422602;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-24752;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)31228;
int var_16 = -142936848;
unsigned char var_17 = (unsigned char)209;
int zero = 0;
unsigned char var_18 = (unsigned char)149;
int var_19 = -604374254;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5733037038200212169LL;
int var_22 = -1003581031;
short var_23 = (short)-23824;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-38;
int var_26 = 1180407691;
short var_27 = (short)16918;
_Bool var_28 = (_Bool)0;
int var_29 = -1991050216;
unsigned char var_30 = (unsigned char)51;
int var_31 = -1193492257;
unsigned long long int var_32 = 5625873736924006580ULL;
int var_33 = 160394406;
unsigned short var_34 = (unsigned short)34469;
unsigned short var_35 = (unsigned short)7993;
unsigned long long int var_36 = 16588312022628135751ULL;
unsigned int var_37 = 1260463674U;
short var_38 = (short)-2371;
signed char var_39 = (signed char)93;
unsigned short var_40 = (unsigned short)48732;
signed char var_41 = (signed char)-32;
unsigned char var_42 = (unsigned char)63;
long long int var_43 = 2393392603418173548LL;
unsigned short var_44 = (unsigned short)31128;
signed char var_45 = (signed char)-104;
int var_46 = -1993666843;
signed char arr_1 [23] ;
unsigned char arr_3 [23] [23] ;
int arr_5 [23] [23] [23] [23] ;
int arr_7 [23] [23] [23] ;
short arr_8 [23] [23] [23] [23] ;
_Bool arr_10 [23] [23] [23] [23] [23] [23] ;
_Bool arr_12 [23] [23] [23] [23] ;
unsigned short arr_13 [23] [23] [23] [23] [23] ;
int arr_14 [23] ;
unsigned short arr_23 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_24 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -168712524;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -811112811;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-2672;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)13310 : (unsigned short)5649;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -135194565;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)39672 : (unsigned short)30330;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)125;
}

void checksum() {
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
