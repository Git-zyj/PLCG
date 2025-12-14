#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
signed char var_1 = (signed char)100;
_Bool var_3 = (_Bool)0;
int var_4 = 777823661;
signed char var_5 = (signed char)-44;
int var_6 = 871853820;
unsigned int var_8 = 4190584268U;
unsigned int var_10 = 483967866U;
signed char var_11 = (signed char)-26;
signed char var_13 = (signed char)-51;
unsigned char var_14 = (unsigned char)177;
short var_16 = (short)18806;
long long int var_17 = 3180653278868998047LL;
short var_18 = (short)1852;
short var_19 = (short)-7779;
int zero = 0;
unsigned long long int var_20 = 10777889586634343963ULL;
unsigned int var_21 = 2546336704U;
short var_22 = (short)-1987;
signed char var_23 = (signed char)-90;
unsigned short var_24 = (unsigned short)15212;
unsigned short var_25 = (unsigned short)35082;
int var_26 = -550179095;
long long int var_27 = 1252164374436419771LL;
unsigned short var_28 = (unsigned short)43806;
unsigned long long int var_29 = 5558319601560042957ULL;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 11699266U;
unsigned int var_32 = 3939067590U;
short var_33 = (short)15965;
_Bool var_34 = (_Bool)0;
unsigned int var_35 = 3157966818U;
short var_36 = (short)10610;
unsigned int var_37 = 226774644U;
unsigned int var_38 = 4058411012U;
int var_39 = -369542930;
unsigned short var_40 = (unsigned short)26513;
unsigned int var_41 = 3734494642U;
signed char arr_0 [15] ;
_Bool arr_1 [15] [15] ;
unsigned int arr_4 [15] ;
long long int arr_5 [15] [15] [15] ;
long long int arr_8 [15] [15] [15] [15] ;
unsigned int arr_9 [15] [15] ;
unsigned short arr_11 [11] [11] ;
unsigned short arr_12 [11] [11] ;
short arr_21 [11] ;
unsigned int arr_28 [25] [25] ;
short arr_32 [20] [20] ;
unsigned short arr_34 [20] ;
unsigned long long int arr_45 [21] [21] ;
unsigned short arr_47 [21] ;
unsigned int arr_54 [21] [21] [21] [21] ;
_Bool arr_26 [11] [11] [11] [11] ;
signed char arr_39 [20] [20] [20] ;
unsigned long long int arr_40 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1653101322U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -2845046873367509818LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3409474480085637221LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 615352264U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)27338;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)21705;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (short)-2979;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_28 [i_0] [i_1] = 3711994309U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_32 [i_0] [i_1] = (short)23771;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = (unsigned short)29138;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_45 [i_0] [i_1] = 5723553348150274351ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_47 [i_0] = (unsigned short)29948;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 156586226U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)66 : (signed char)-67;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4907621414885323883ULL : 11067125881388361943ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
