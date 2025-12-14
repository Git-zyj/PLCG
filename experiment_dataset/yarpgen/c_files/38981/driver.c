#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1071738031913236617LL;
int var_1 = -1155413627;
long long int var_2 = -4815439695807475031LL;
int var_4 = -1238278954;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-33;
unsigned long long int var_8 = 1004465885290169784ULL;
long long int var_10 = -3627688815856253454LL;
unsigned long long int var_11 = 3389162361749999131ULL;
unsigned int var_12 = 2783802580U;
long long int var_13 = -3142114956789592944LL;
signed char var_14 = (signed char)72;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-111;
unsigned char var_18 = (unsigned char)152;
short var_19 = (short)-13988;
int zero = 0;
int var_20 = 1207288077;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)192;
unsigned short var_24 = (unsigned short)43745;
unsigned char var_25 = (unsigned char)129;
unsigned long long int var_26 = 4686012733177659172ULL;
unsigned long long int var_27 = 12428214521336406620ULL;
unsigned int var_28 = 4132485404U;
long long int var_29 = 2970278767394742310LL;
long long int var_30 = -8470377729178043637LL;
unsigned int var_31 = 538204873U;
unsigned long long int var_32 = 18403980396398676283ULL;
unsigned short var_33 = (unsigned short)20517;
unsigned short var_34 = (unsigned short)36981;
signed char var_35 = (signed char)67;
signed char var_36 = (signed char)-25;
unsigned long long int var_37 = 6738645613808943905ULL;
int var_38 = 1266909782;
_Bool var_39 = (_Bool)1;
int var_40 = -2049001163;
unsigned int var_41 = 4271868986U;
unsigned char var_42 = (unsigned char)47;
int var_43 = -1318048449;
int var_44 = 1705972622;
unsigned char var_45 = (unsigned char)122;
unsigned long long int var_46 = 16329540700532836794ULL;
int var_47 = 798518894;
unsigned short var_48 = (unsigned short)18344;
long long int var_49 = 825544852271848871LL;
signed char var_50 = (signed char)-102;
unsigned short var_51 = (unsigned short)46807;
signed char var_52 = (signed char)114;
unsigned long long int arr_1 [13] ;
_Bool arr_3 [19] ;
unsigned long long int arr_4 [19] [19] ;
long long int arr_11 [19] [19] [19] [19] ;
unsigned short arr_13 [19] [19] [19] [19] ;
unsigned int arr_19 [19] [19] [19] ;
int arr_24 [19] [19] [19] [19] [19] ;
unsigned int arr_28 [19] [19] [19] ;
unsigned short arr_31 [19] ;
unsigned char arr_47 [25] ;
short arr_48 [25] ;
unsigned long long int arr_53 [25] [25] [25] ;
_Bool arr_54 [25] [25] [25] [25] ;
unsigned int arr_57 [25] [25] [25] [25] [25] ;
unsigned long long int arr_8 [19] ;
long long int arr_18 [19] [19] [19] [19] ;
long long int arr_26 [19] [19] ;
long long int arr_34 [19] ;
unsigned int arr_38 [19] ;
unsigned short arr_46 [19] ;
unsigned short arr_49 [25] ;
int arr_50 [25] [25] ;
long long int arr_59 [25] [25] [25] ;
unsigned int arr_63 [25] [25] [25] [25] ;
unsigned long long int arr_68 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 6939456343655697892ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 5289889518381034725ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 49235748902623204LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33892;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1202481913U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 594619319;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 1324023040U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = (unsigned short)30985;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_47 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? (short)-26102 : (short)17204;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 17823107202470640851ULL : 16930511650932725260ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 160295966U : 292465081U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 4569139095200775130ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2620426969868095928LL : 7403710332427279885LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? -6688727809791114811LL : -1206715125517343348LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = -728458341580018406LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = 3610384684U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_46 [i_0] = (unsigned short)9959;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12669 : (unsigned short)47349;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_50 [i_0] [i_1] = (i_0 % 2 == 0) ? 1289064371 : 1836308397;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2466515773985245989LL : 8635793835027768476LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_63 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2902981945U : 3867569349U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_68 [i_0] = (i_0 % 2 == 0) ? 15891620279730718899ULL : 12936531140996566372ULL;
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_59 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_63 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_68 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
