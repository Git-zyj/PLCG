#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
unsigned short var_1 = (unsigned short)27417;
unsigned long long int var_3 = 15715139478362162744ULL;
unsigned long long int var_10 = 15524968275392753719ULL;
unsigned short var_11 = (unsigned short)33650;
long long int var_12 = 4823798574800400379LL;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)1;
unsigned short var_18 = (unsigned short)56685;
int zero = 0;
unsigned char var_20 = (unsigned char)123;
unsigned short var_21 = (unsigned short)10790;
unsigned short var_22 = (unsigned short)4509;
signed char var_23 = (signed char)-91;
unsigned int var_24 = 1413452504U;
unsigned short var_25 = (unsigned short)3375;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 228740504992963927ULL;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 7038004662550123765ULL;
unsigned short var_31 = (unsigned short)20920;
unsigned int var_32 = 3621965565U;
unsigned long long int var_33 = 16247991045646402960ULL;
unsigned int var_34 = 1450410216U;
long long int var_35 = 137498131997252251LL;
unsigned short var_36 = (unsigned short)63481;
_Bool var_37 = (_Bool)0;
signed char var_38 = (signed char)7;
unsigned char arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
unsigned long long int arr_2 [10] ;
unsigned long long int arr_4 [10] [10] [10] ;
unsigned short arr_5 [10] [10] [10] ;
unsigned long long int arr_8 [10] [10] [10] ;
unsigned short arr_9 [10] [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] [10] ;
unsigned short arr_11 [10] [10] [10] [10] [10] ;
_Bool arr_12 [10] [10] [10] [10] [10] [10] ;
long long int arr_13 [10] [10] [10] [10] ;
_Bool arr_16 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4609626472605799577ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 17509151808594102150ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)23889 : (unsigned short)60155;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 777953137820897446ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned short)47343 : (unsigned short)4181;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 14640127031335761790ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)52935;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 357368562004809262LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
