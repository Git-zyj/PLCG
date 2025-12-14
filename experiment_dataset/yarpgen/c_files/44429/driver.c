#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17548266449921170707ULL;
long long int var_1 = -4603164778533260703LL;
unsigned int var_2 = 385632337U;
unsigned short var_3 = (unsigned short)65303;
unsigned long long int var_4 = 9690981557687067088ULL;
unsigned int var_5 = 819621691U;
unsigned short var_6 = (unsigned short)11037;
int var_7 = -1926503628;
unsigned int var_8 = 2471665826U;
unsigned short var_9 = (unsigned short)27377;
short var_10 = (short)27812;
unsigned int var_12 = 3635769068U;
int zero = 0;
int var_13 = 385494018;
unsigned int var_14 = 2785155699U;
unsigned char var_15 = (unsigned char)29;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-73;
signed char var_18 = (signed char)59;
unsigned char var_19 = (unsigned char)175;
short var_20 = (short)12009;
long long int var_21 = -370928335802915938LL;
short var_22 = (short)20902;
short var_23 = (short)12264;
int var_24 = 1948711243;
unsigned short var_25 = (unsigned short)17522;
int var_26 = 1041021610;
short var_27 = (short)-2807;
signed char var_28 = (signed char)-88;
signed char var_29 = (signed char)-67;
unsigned short var_30 = (unsigned short)44476;
int var_31 = -2071745696;
unsigned int var_32 = 2870084573U;
short var_33 = (short)24983;
short var_34 = (short)2367;
short var_35 = (short)13116;
long long int var_36 = 8523984044700128388LL;
signed char var_37 = (signed char)-107;
signed char var_38 = (signed char)57;
_Bool var_39 = (_Bool)0;
signed char var_40 = (signed char)-71;
unsigned int var_41 = 838042873U;
unsigned short var_42 = (unsigned short)28203;
unsigned int var_43 = 3863919516U;
short var_44 = (short)11759;
long long int var_45 = 4556413466753404347LL;
signed char var_46 = (signed char)101;
_Bool var_47 = (_Bool)0;
short var_48 = (short)-3073;
unsigned int var_49 = 1458258260U;
signed char var_50 = (signed char)67;
_Bool var_51 = (_Bool)0;
int var_52 = -305855757;
unsigned char var_53 = (unsigned char)168;
signed char var_54 = (signed char)69;
unsigned int var_55 = 4182245269U;
unsigned int var_56 = 4192794948U;
unsigned char var_57 = (unsigned char)121;
int var_58 = 1729521741;
int var_59 = -90989340;
unsigned short var_60 = (unsigned short)12731;
signed char var_61 = (signed char)-77;
signed char var_62 = (signed char)-114;
_Bool var_63 = (_Bool)0;
int var_64 = -258773297;
unsigned long long int var_65 = 757488709662558706ULL;
signed char var_66 = (signed char)-13;
short var_67 = (short)20989;
signed char arr_0 [11] [11] ;
_Bool arr_1 [11] ;
unsigned short arr_2 [11] [11] ;
int arr_3 [11] ;
_Bool arr_4 [11] [11] ;
int arr_5 [11] ;
unsigned long long int arr_6 [11] [11] ;
long long int arr_8 [11] [11] ;
int arr_10 [11] [11] [11] ;
short arr_13 [11] [11] [11] [11] [11] ;
unsigned long long int arr_14 [11] [11] [11] [11] [11] ;
int arr_19 [11] [11] [11] [11] [11] [11] [11] ;
signed char arr_22 [24] [24] ;
unsigned short arr_23 [24] ;
long long int arr_24 [15] ;
unsigned short arr_25 [15] ;
unsigned short arr_26 [15] ;
_Bool arr_27 [15] [15] ;
unsigned char arr_29 [15] [15] ;
unsigned int arr_30 [15] [15] [15] ;
signed char arr_31 [15] [15] ;
unsigned int arr_32 [15] ;
unsigned short arr_33 [15] [15] [15] ;
_Bool arr_34 [15] [15] [15] [15] ;
short arr_35 [15] [15] [15] [15] [15] [15] ;
short arr_36 [15] [15] [15] [15] [15] [15] [15] ;
long long int arr_37 [15] ;
int arr_38 [15] [15] [15] [15] [15] [15] [15] ;
short arr_39 [15] [15] [15] [15] ;
unsigned int arr_40 [15] [15] [15] ;
unsigned short arr_41 [15] [15] ;
short arr_42 [15] [15] [15] [15] ;
unsigned int arr_44 [15] [15] [15] [15] [15] ;
short arr_45 [15] [15] [15] ;
unsigned short arr_48 [15] [15] [15] [15] ;
unsigned long long int arr_52 [15] [15] [15] [15] [15] ;
unsigned int arr_54 [15] [15] [15] [15] ;
signed char arr_59 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)15154;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -2141792088;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -1152532075;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 881225273307839308ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = -7029959208178603453LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -738555732;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-20141 : (short)-1618;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1366926388734661011ULL : 11893984263193490431ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1861068005;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (unsigned short)11040;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 7284825742917285526LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (unsigned short)14382;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (unsigned short)29923;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2292142218U : 1805759609U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)67 : (signed char)96;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = 3909619381U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)5569 : (unsigned short)6213;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-32606;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-10316;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_37 [i_0] = -3313541855127764346LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 1548956684 : -1409483507;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (short)29940;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 2992896468U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_41 [i_0] [i_1] = (unsigned short)65489;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (short)-30949;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = 1104407285U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (short)6413;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59760;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = 10344617341874283019ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 3871092441U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_59 [i_0] = (signed char)93;
}

void checksum() {
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
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
