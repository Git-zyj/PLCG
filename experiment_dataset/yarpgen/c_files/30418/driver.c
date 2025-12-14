#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3560591627U;
unsigned short var_2 = (unsigned short)54705;
short var_3 = (short)-13262;
unsigned char var_4 = (unsigned char)148;
unsigned long long int var_5 = 6315662993087672037ULL;
unsigned long long int var_6 = 3745826787250023953ULL;
unsigned int var_7 = 627767779U;
long long int var_9 = -2383868289424089351LL;
unsigned int var_10 = 3317951767U;
int zero = 0;
unsigned long long int var_11 = 6943303481187946405ULL;
unsigned char var_12 = (unsigned char)136;
short var_13 = (short)10090;
unsigned char var_14 = (unsigned char)0;
short var_15 = (short)31613;
short var_16 = (short)-27219;
short var_17 = (short)-7661;
unsigned int var_18 = 3740009577U;
int var_19 = 1871253683;
unsigned int var_20 = 842234707U;
int var_21 = 2025067287;
long long int var_22 = 1398592203344419251LL;
unsigned short var_23 = (unsigned short)54124;
short var_24 = (short)23158;
unsigned short var_25 = (unsigned short)1660;
short var_26 = (short)-24447;
long long int var_27 = 7653026221166970067LL;
unsigned long long int var_28 = 296733447122833229ULL;
int var_29 = 400037868;
short var_30 = (short)-10620;
unsigned short var_31 = (unsigned short)40472;
long long int var_32 = -2204440806805309451LL;
unsigned char var_33 = (unsigned char)229;
unsigned char var_34 = (unsigned char)203;
unsigned short var_35 = (unsigned short)48918;
short var_36 = (short)-25136;
unsigned short var_37 = (unsigned short)9697;
unsigned char var_38 = (unsigned char)96;
unsigned char arr_2 [11] [11] ;
unsigned char arr_5 [16] [16] ;
unsigned long long int arr_7 [16] ;
unsigned int arr_9 [16] [16] [16] ;
unsigned int arr_16 [16] ;
unsigned char arr_18 [16] [16] [16] [16] ;
unsigned long long int arr_19 [16] [16] [16] ;
int arr_24 [16] [16] [16] [16] ;
short arr_25 [16] [16] [16] ;
unsigned short arr_30 [16] [16] ;
unsigned short arr_31 [16] [16] [16] [16] [16] ;
unsigned char arr_3 [11] ;
short arr_4 [11] ;
short arr_15 [16] [16] ;
unsigned char arr_26 [16] [16] [16] [16] ;
unsigned short arr_41 [11] ;
short arr_42 [11] ;
unsigned long long int arr_43 [11] [11] ;
unsigned long long int arr_48 [15] ;
unsigned short arr_49 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 5778510883509367695ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4081632105U : 741293211U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 955218964U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 14515931607929766237ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 1148760326;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)20242;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)12304 : (unsigned short)51000;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)49987 : (unsigned short)53884;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)7033;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-13753;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)254 : (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_41 [i_0] = (unsigned short)31167;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_42 [i_0] = (short)-4972;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_43 [i_0] [i_1] = 692291917710061659ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_48 [i_0] = 10500399926056042633ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_49 [i_0] [i_1] = (unsigned short)19816;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_48 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
