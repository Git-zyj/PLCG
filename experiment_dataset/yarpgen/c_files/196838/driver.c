#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1538130943U;
int var_1 = 1377530071;
unsigned short var_2 = (unsigned short)27354;
short var_3 = (short)11200;
unsigned short var_4 = (unsigned short)27617;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 10717564407482613032ULL;
short var_8 = (short)25200;
short var_9 = (short)932;
unsigned short var_10 = (unsigned short)35258;
unsigned int var_11 = 3014963850U;
unsigned char var_12 = (unsigned char)71;
unsigned int var_13 = 2371518635U;
unsigned long long int var_14 = 16226391254179919903ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 646241117U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)53212;
unsigned short var_20 = (unsigned short)21956;
unsigned long long int var_21 = 3756301137211766833ULL;
unsigned int var_22 = 2958965828U;
unsigned long long int var_23 = 12295627950585572332ULL;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-8;
signed char var_26 = (signed char)73;
unsigned char var_27 = (unsigned char)108;
unsigned short var_28 = (unsigned short)49934;
signed char var_29 = (signed char)64;
short var_30 = (short)-25560;
long long int var_31 = 610769046458520508LL;
unsigned int var_32 = 3183603580U;
unsigned char var_33 = (unsigned char)188;
unsigned char var_34 = (unsigned char)188;
int var_35 = -561015035;
unsigned char var_36 = (unsigned char)129;
unsigned short var_37 = (unsigned short)48119;
long long int var_38 = 7444061253800025443LL;
unsigned char var_39 = (unsigned char)154;
unsigned char var_40 = (unsigned char)181;
_Bool var_41 = (_Bool)1;
unsigned char var_42 = (unsigned char)169;
_Bool arr_7 [20] [20] [20] ;
unsigned short arr_32 [14] [14] ;
short arr_35 [14] ;
long long int arr_36 [14] [14] ;
unsigned short arr_53 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned short)62931;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = (short)11248;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_36 [i_0] [i_1] = -1732855303243422182LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)48627 : (unsigned short)60441;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
