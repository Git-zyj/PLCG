#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56674;
unsigned char var_1 = (unsigned char)51;
unsigned short var_2 = (unsigned short)39426;
unsigned char var_3 = (unsigned char)105;
unsigned short var_4 = (unsigned short)14729;
unsigned long long int var_5 = 9461946196830053542ULL;
unsigned char var_6 = (unsigned char)79;
unsigned long long int var_7 = 4742827291022742662ULL;
int var_8 = -1567552613;
unsigned int var_9 = 3543677925U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)6660;
long long int var_12 = 7602594952149753836LL;
long long int var_13 = 3628422170121850614LL;
int var_14 = 92692815;
unsigned char var_15 = (unsigned char)194;
long long int var_16 = -7046105612547940650LL;
int var_17 = 1354968905;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 16216752344025181195ULL;
signed char var_21 = (signed char)17;
unsigned int var_22 = 3857475811U;
unsigned long long int var_23 = 8005247696655854670ULL;
unsigned long long int var_24 = 16593123097380020261ULL;
_Bool var_25 = (_Bool)0;
int var_26 = 398596788;
unsigned int var_27 = 343191168U;
unsigned long long int var_28 = 1833841490630998708ULL;
long long int var_29 = -147007207302703682LL;
int var_30 = -392462951;
unsigned short var_31 = (unsigned short)24961;
_Bool var_32 = (_Bool)0;
unsigned short var_33 = (unsigned short)57514;
signed char var_34 = (signed char)-70;
unsigned char var_35 = (unsigned char)83;
_Bool var_36 = (_Bool)1;
short var_37 = (short)32412;
unsigned short var_38 = (unsigned short)11795;
unsigned short var_39 = (unsigned short)2832;
_Bool var_40 = (_Bool)1;
unsigned short var_41 = (unsigned short)64849;
long long int var_42 = 7979783661661167211LL;
_Bool var_43 = (_Bool)1;
unsigned int var_44 = 4137488704U;
int var_45 = -1046739520;
long long int var_46 = 396811445405497758LL;
long long int var_47 = 8056027174066890413LL;
long long int var_48 = 5317455254247305735LL;
int var_49 = -1302916859;
unsigned long long int var_50 = 1623251444131056537ULL;
unsigned char var_51 = (unsigned char)216;
unsigned int var_52 = 1493936487U;
unsigned char var_53 = (unsigned char)212;
unsigned long long int var_54 = 7310394020890825448ULL;
unsigned long long int var_55 = 11104650774334427619ULL;
unsigned int var_56 = 3544608404U;
unsigned long long int var_57 = 7535075247305403938ULL;
unsigned char var_58 = (unsigned char)37;
signed char var_59 = (signed char)29;
int var_60 = -430359187;
signed char arr_0 [15] ;
unsigned long long int arr_1 [15] ;
int arr_2 [12] ;
unsigned int arr_3 [12] [12] ;
_Bool arr_5 [12] [12] [12] ;
unsigned long long int arr_6 [12] [12] ;
int arr_14 [12] [12] [12] ;
_Bool arr_16 [12] [12] [12] [12] [12] ;
long long int arr_20 [12] [12] ;
unsigned long long int arr_22 [12] [12] ;
int arr_23 [12] [12] [12] [12] ;
unsigned int arr_24 [12] [12] [12] [12] ;
unsigned long long int arr_27 [12] [12] [12] [12] ;
unsigned short arr_29 [12] [12] [12] [12] ;
unsigned char arr_30 [12] [12] [12] ;
unsigned short arr_38 [12] [12] [12] ;
unsigned long long int arr_49 [20] ;
int arr_51 [24] ;
unsigned short arr_53 [24] [24] [24] ;
unsigned long long int arr_54 [24] [24] [24] ;
_Bool arr_55 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 10941130931127197066ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 87737916;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 1794399962U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 17019570908172773645ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1660790807;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? -485567215300921886LL : -4360873397902688591LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = 2953586488110023251ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -296904921;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 2157473274U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 9998488089731015803ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned short)774;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)65456;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_49 [i_0] = 3490729945245474338ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_51 [i_0] = -143661258;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)7886 : (unsigned short)9797;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 346370251778353757ULL : 14448120328093130580ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
