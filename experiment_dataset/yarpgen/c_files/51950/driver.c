#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned char var_1 = (unsigned char)247;
int var_3 = -1660443251;
unsigned short var_4 = (unsigned short)41249;
int var_5 = -1473295523;
unsigned long long int var_6 = 12795930856451769627ULL;
short var_7 = (short)-17016;
unsigned short var_8 = (unsigned short)35765;
unsigned int var_9 = 3855693923U;
unsigned long long int var_11 = 11597442090949817684ULL;
unsigned short var_12 = (unsigned short)35440;
short var_13 = (short)10926;
int zero = 0;
unsigned long long int var_14 = 5606389399846966952ULL;
short var_15 = (short)-28356;
unsigned long long int var_16 = 1360011977560857348ULL;
signed char var_17 = (signed char)-101;
unsigned char var_18 = (unsigned char)135;
signed char var_19 = (signed char)67;
unsigned short var_20 = (unsigned short)45557;
unsigned long long int var_21 = 1627677559577631718ULL;
int var_22 = -1490406614;
int var_23 = -1919143367;
unsigned long long int var_24 = 11765181221765694000ULL;
short var_25 = (short)11969;
unsigned short var_26 = (unsigned short)47787;
unsigned char var_27 = (unsigned char)86;
unsigned char var_28 = (unsigned char)161;
unsigned char var_29 = (unsigned char)131;
unsigned long long int var_30 = 1374573850138349889ULL;
short var_31 = (short)-12282;
unsigned long long int var_32 = 16541342676722348231ULL;
unsigned long long int var_33 = 15832858729773994509ULL;
short var_34 = (short)25119;
unsigned long long int var_35 = 474710598194813092ULL;
unsigned short arr_1 [11] [11] ;
unsigned int arr_3 [21] [21] ;
unsigned long long int arr_4 [21] ;
_Bool arr_16 [21] [21] [21] ;
unsigned int arr_23 [21] [21] ;
int arr_32 [25] ;
unsigned short arr_2 [11] [11] ;
unsigned int arr_20 [21] [21] [21] [21] [21] [21] ;
int arr_27 [21] [21] [21] [21] [21] ;
unsigned short arr_34 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)63693;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1452866993U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 13126485040336128685ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = 4293527467U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = 1766453521;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)59700;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 1467001403U : 2029906793U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -2140275709 : -1157386629;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = (unsigned short)18182;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
