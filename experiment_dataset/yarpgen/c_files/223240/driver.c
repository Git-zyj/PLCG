#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4621423170784919411ULL;
long long int var_2 = 151921290417794925LL;
int var_3 = 1013371084;
unsigned long long int var_4 = 3166730631759177440ULL;
unsigned long long int var_5 = 9822195363962780122ULL;
short var_6 = (short)25263;
short var_7 = (short)11465;
unsigned short var_8 = (unsigned short)22197;
int var_9 = 1143806518;
short var_10 = (short)14985;
long long int var_11 = 1061884014483941065LL;
signed char var_12 = (signed char)-19;
unsigned char var_13 = (unsigned char)242;
unsigned char var_14 = (unsigned char)70;
unsigned int var_15 = 3091878221U;
long long int var_16 = 1814934491296879580LL;
unsigned long long int var_17 = 2578095942056213459ULL;
short var_18 = (short)26702;
int zero = 0;
long long int var_19 = -7727865058585449783LL;
unsigned char var_20 = (unsigned char)5;
unsigned short var_21 = (unsigned short)43897;
short var_22 = (short)30449;
int var_23 = 1650368134;
unsigned long long int var_24 = 12171875746093581295ULL;
int var_25 = 1668209310;
signed char var_26 = (signed char)94;
unsigned int var_27 = 168987924U;
unsigned int var_28 = 1403241264U;
int var_29 = 491264525;
unsigned int var_30 = 4097861631U;
unsigned short var_31 = (unsigned short)44282;
unsigned long long int var_32 = 4727679697096745415ULL;
int var_33 = -1384269197;
unsigned long long int var_34 = 159810234718049969ULL;
unsigned char var_35 = (unsigned char)41;
unsigned int arr_0 [17] [17] ;
int arr_1 [17] ;
long long int arr_3 [18] [18] ;
int arr_4 [18] ;
int arr_5 [18] ;
long long int arr_8 [18] [18] [18] ;
int arr_10 [18] [18] [18] ;
long long int arr_11 [18] [18] ;
unsigned long long int arr_12 [18] [18] [18] ;
int arr_16 [18] [18] [18] [18] [18] ;
unsigned char arr_17 [18] [18] [18] [18] ;
short arr_23 [18] ;
int arr_28 [18] [18] [18] [18] ;
short arr_31 [18] [18] ;
int arr_40 [18] ;
long long int arr_44 [18] [18] [18] ;
unsigned char arr_2 [17] ;
int arr_6 [18] ;
short arr_7 [18] ;
unsigned long long int arr_20 [18] [18] ;
long long int arr_21 [18] [18] ;
unsigned char arr_29 [18] [18] [18] ;
long long int arr_34 [18] ;
long long int arr_35 [18] ;
unsigned char arr_38 [18] ;
unsigned int arr_41 [18] [18] [18] ;
unsigned int arr_46 [18] [18] [18] ;
long long int arr_47 [18] [18] ;
short arr_50 [18] ;
short arr_51 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 292349260U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1847834278;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 8967127001298954934LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 723033091;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -1771703684;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6186111328198067661LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 190789107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = 7960502463679122959LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 16101060029798905246ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 361757200;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (short)-25491;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 94952983 : 1748391879;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_31 [i_0] [i_1] = (short)19211;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = -1570195785;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 3394404756704451565LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -1913301527;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (short)-21289;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 768827352437722057ULL : 442669069840306679ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? -7644657042246465308LL : -6860053870527704380LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)149 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? -6708130888988626383LL : -7053033760847889072LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 4469728309994649389LL : -7914467479041676458LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 4187719040U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = 1661724104U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_47 [i_0] [i_1] = 3431858280182826441LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_50 [i_0] = (short)-20023;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_51 [i_0] [i_1] = (short)-17113;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_51 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
