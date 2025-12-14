#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6649;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)56318;
unsigned int var_5 = 3230956766U;
unsigned char var_6 = (unsigned char)48;
unsigned short var_7 = (unsigned short)52311;
unsigned short var_8 = (unsigned short)27677;
short var_9 = (short)7928;
unsigned int var_10 = 2227678757U;
int var_11 = -1196887880;
long long int var_12 = 2774965157917391305LL;
short var_13 = (short)14143;
unsigned char var_14 = (unsigned char)217;
unsigned long long int var_15 = 1318158423322297886ULL;
unsigned long long int var_16 = 18221347570912487473ULL;
int zero = 0;
signed char var_17 = (signed char)-26;
unsigned long long int var_18 = 11071829101962760375ULL;
unsigned long long int var_19 = 17528901508422126780ULL;
short var_20 = (short)-6993;
unsigned short var_21 = (unsigned short)52018;
_Bool var_22 = (_Bool)0;
short var_23 = (short)12208;
unsigned int var_24 = 3236140688U;
signed char var_25 = (signed char)-41;
long long int var_26 = -6639915243544153647LL;
int var_27 = -641470232;
int var_28 = -1417567691;
unsigned long long int var_29 = 7488009039787716877ULL;
short var_30 = (short)17103;
short var_31 = (short)-19423;
short var_32 = (short)6177;
unsigned int var_33 = 938230225U;
_Bool var_34 = (_Bool)1;
short var_35 = (short)32182;
unsigned short var_36 = (unsigned short)27366;
short var_37 = (short)28187;
short var_38 = (short)-4687;
unsigned long long int arr_0 [17] ;
unsigned char arr_1 [17] ;
short arr_2 [17] ;
unsigned long long int arr_5 [17] [17] [17] ;
_Bool arr_14 [15] [15] ;
unsigned short arr_16 [15] ;
unsigned int arr_18 [15] [15] [15] ;
unsigned short arr_19 [15] [15] ;
unsigned long long int arr_24 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_27 [15] [15] ;
unsigned int arr_6 [17] [17] [17] ;
short arr_12 [17] ;
int arr_13 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 703971462541943352ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-20664;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 5056326719066781395ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6110 : (unsigned short)60953;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4102068825U : 1367634035U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)2982 : (unsigned short)49016;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 11551078177089568846ULL : 17461482890675382681ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? 1459877212U : 2931891875U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3133780607U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (short)3819;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1698245913;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
