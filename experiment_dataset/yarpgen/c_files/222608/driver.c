#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1618925658;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-1426;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 9107608686941820592ULL;
int var_6 = 382158699;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6121125924498603991LL;
unsigned long long int var_9 = 10225627116695963299ULL;
int var_10 = 1928358267;
unsigned long long int var_11 = 10883311999293519911ULL;
int zero = 0;
long long int var_12 = -1137243288185553476LL;
signed char var_13 = (signed char)-99;
int var_14 = 641185359;
unsigned long long int var_15 = 6280093496009307076ULL;
short var_16 = (short)8226;
short var_17 = (short)-23068;
int var_18 = 1559742418;
unsigned char var_19 = (unsigned char)228;
short var_20 = (short)27210;
unsigned long long int var_21 = 827106346101902697ULL;
unsigned int var_22 = 3126445498U;
long long int var_23 = -8728960071522445712LL;
short var_24 = (short)21706;
_Bool var_25 = (_Bool)1;
long long int var_26 = -319462302796541593LL;
signed char var_27 = (signed char)52;
unsigned char var_28 = (unsigned char)255;
unsigned char var_29 = (unsigned char)131;
unsigned long long int var_30 = 9457349792521138932ULL;
_Bool var_31 = (_Bool)0;
unsigned char var_32 = (unsigned char)114;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)48;
unsigned int var_35 = 3914294233U;
unsigned long long int var_36 = 3318236244601497025ULL;
signed char arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned long long int arr_4 [19] ;
long long int arr_5 [19] ;
int arr_6 [19] ;
signed char arr_7 [19] ;
unsigned char arr_9 [11] ;
_Bool arr_17 [11] [11] ;
long long int arr_20 [11] [11] ;
unsigned char arr_21 [11] [11] [11] ;
_Bool arr_23 [11] [11] [11] ;
long long int arr_24 [11] [11] [11] ;
unsigned char arr_31 [11] [11] ;
unsigned short arr_34 [11] [11] [11] [11] ;
int arr_40 [17] [17] ;
unsigned long long int arr_42 [17] ;
unsigned long long int arr_46 [17] [17] [17] [17] ;
unsigned int arr_3 [23] [23] ;
_Bool arr_10 [11] ;
unsigned long long int arr_11 [11] ;
long long int arr_14 [11] ;
int arr_18 [11] [11] ;
unsigned short arr_22 [11] ;
long long int arr_39 [11] [11] ;
unsigned long long int arr_54 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)35222;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 12507475845751316952ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -687297670729628011LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -822616383;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = 3860605368793393649LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -12269482049407025LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (unsigned short)29665;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_40 [i_0] [i_1] = -896122889;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_42 [i_0] = 7829652307371912851ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = 6205635953292859263ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 673521682U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 17080303022677479516ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = -1271568185928938008LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = 1357615722;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (unsigned short)31088;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_39 [i_0] [i_1] = -6388053284867396977LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 10270775942036256534ULL : 12423749172742058962ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_54 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
