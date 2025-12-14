#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
short var_1 = (short)23196;
unsigned short var_2 = (unsigned short)36555;
unsigned int var_4 = 3034349319U;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)35191;
unsigned short var_11 = (unsigned short)41615;
unsigned long long int var_13 = 2169216552528786269ULL;
unsigned long long int var_14 = 12412150360576294365ULL;
int var_18 = -1953230137;
int zero = 0;
unsigned short var_20 = (unsigned short)19683;
unsigned int var_21 = 3427136759U;
unsigned int var_22 = 4241459895U;
int var_23 = 1447063247;
signed char var_24 = (signed char)-35;
long long int var_25 = 2346580884345255786LL;
short var_26 = (short)-24374;
_Bool var_27 = (_Bool)1;
unsigned short var_28 = (unsigned short)64470;
unsigned long long int var_29 = 2630866050995175761ULL;
unsigned long long int var_30 = 1729678677279298751ULL;
unsigned long long int var_31 = 5551641790844104495ULL;
unsigned short var_32 = (unsigned short)14514;
unsigned short var_33 = (unsigned short)37134;
unsigned long long int var_34 = 6394139161085193314ULL;
unsigned long long int var_35 = 8631357119955996729ULL;
unsigned char var_36 = (unsigned char)35;
unsigned short var_37 = (unsigned short)30589;
unsigned int var_38 = 1995956277U;
unsigned short var_39 = (unsigned short)10420;
unsigned long long int var_40 = 7140738252624898321ULL;
long long int var_41 = 3666889651663844112LL;
long long int var_42 = -4912939033416026381LL;
int var_43 = 1199940985;
_Bool var_44 = (_Bool)0;
unsigned int var_45 = 632869094U;
signed char var_46 = (signed char)-53;
int var_47 = -2076472631;
_Bool var_48 = (_Bool)0;
unsigned long long int arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
int arr_3 [19] ;
_Bool arr_5 [19] ;
unsigned int arr_6 [19] ;
unsigned short arr_8 [19] [19] [19] ;
long long int arr_10 [19] [19] ;
int arr_11 [19] [19] [19] ;
unsigned short arr_12 [19] [19] ;
short arr_13 [19] [19] [19] ;
unsigned long long int arr_14 [19] ;
int arr_16 [19] [19] [19] ;
unsigned short arr_17 [19] [19] [19] [19] ;
unsigned long long int arr_19 [19] [19] [19] [19] ;
int arr_21 [19] ;
long long int arr_22 [19] [19] [19] [19] [19] ;
unsigned int arr_24 [19] [19] [19] ;
int arr_25 [19] [19] ;
int arr_27 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_28 [19] [19] [19] [19] [19] ;
int arr_35 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 17793997499537600755ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13345112214960251741ULL : 16026946728169704508ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 273863145;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4164559739U : 1879854262U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)23818 : (unsigned short)13098;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = -2167018101599265999LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -597856101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)1653;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-12040;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 12704522641358232878ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 437320982 : 1666258428;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41955;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 13838069474589022067ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = 409734509;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -2094833030619073967LL : -3863194234272632845LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 4057789768U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_25 [i_0] [i_1] = -23759093;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 636715306;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)60035 : (unsigned short)14525;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_35 [i_0] [i_1] = (i_1 % 2 == 0) ? 1031398435 : 939896320;
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
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
