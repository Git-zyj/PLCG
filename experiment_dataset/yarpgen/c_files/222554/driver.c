#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5619296891881480896LL;
signed char var_5 = (signed char)-65;
int var_8 = -255750708;
unsigned char var_10 = (unsigned char)80;
short var_11 = (short)27434;
short var_12 = (short)-31583;
unsigned char var_13 = (unsigned char)158;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)60425;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 13492159890172064362ULL;
int zero = 0;
unsigned long long int var_20 = 11110794330859670462ULL;
unsigned long long int var_21 = 11392155826727489114ULL;
signed char var_22 = (signed char)-77;
unsigned char var_23 = (unsigned char)12;
signed char var_24 = (signed char)19;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)156;
unsigned short var_27 = (unsigned short)33678;
short var_28 = (short)-18528;
int var_29 = -980744156;
short var_30 = (short)3243;
unsigned short var_31 = (unsigned short)20450;
unsigned short var_32 = (unsigned short)29230;
long long int var_33 = 695481054954542724LL;
long long int var_34 = 3248279068821256504LL;
unsigned long long int var_35 = 6876812909605336595ULL;
short var_36 = (short)17777;
unsigned long long int var_37 = 9818582722319883280ULL;
long long int var_38 = -5144913760260297387LL;
long long int var_39 = 4196674081819316563LL;
unsigned int var_40 = 3124835726U;
_Bool var_41 = (_Bool)1;
short var_42 = (short)24549;
int var_43 = -1838601023;
unsigned char var_44 = (unsigned char)118;
unsigned long long int var_45 = 2690564927394249398ULL;
unsigned short arr_0 [21] [21] ;
unsigned long long int arr_1 [21] [21] ;
short arr_2 [21] ;
_Bool arr_4 [21] [21] ;
_Bool arr_5 [21] [21] [21] [21] ;
short arr_6 [21] [21] ;
unsigned short arr_7 [21] [21] [21] [21] [21] ;
unsigned int arr_8 [21] [21] [21] [21] [21] ;
long long int arr_9 [21] [21] ;
signed char arr_10 [21] [21] [21] ;
long long int arr_11 [21] [21] [21] [21] ;
unsigned long long int arr_14 [21] [21] [21] [21] [21] ;
int arr_19 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)18931;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 932210465118371071ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)28634;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (short)5204;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)46663;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1753932298U : 3816875224U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 6331471641720862928LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -2755307831785416326LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 18240128429339899783ULL : 71746668427039984ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1797557507 : -9225842;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
