#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 689094386U;
signed char var_1 = (signed char)15;
unsigned int var_2 = 777497897U;
unsigned short var_4 = (unsigned short)17345;
_Bool var_6 = (_Bool)1;
int var_7 = 210964884;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 18402700365638260415ULL;
unsigned short var_15 = (unsigned short)29278;
int var_16 = -1851556932;
int zero = 0;
unsigned short var_18 = (unsigned short)56682;
unsigned char var_19 = (unsigned char)14;
unsigned short var_20 = (unsigned short)13587;
short var_21 = (short)-22471;
unsigned short var_22 = (unsigned short)24546;
unsigned int var_23 = 1296987339U;
signed char var_24 = (signed char)27;
signed char var_25 = (signed char)-89;
unsigned char var_26 = (unsigned char)234;
int var_27 = -213016220;
short var_28 = (short)7361;
short var_29 = (short)3553;
unsigned short var_30 = (unsigned short)46704;
unsigned short var_31 = (unsigned short)13647;
_Bool var_32 = (_Bool)0;
signed char var_33 = (signed char)10;
unsigned long long int var_34 = 7615862076885169277ULL;
unsigned long long int var_35 = 5398747071548330573ULL;
unsigned int arr_0 [12] ;
signed char arr_1 [12] [12] ;
unsigned char arr_2 [12] ;
unsigned long long int arr_4 [12] ;
unsigned short arr_5 [12] ;
unsigned short arr_7 [12] [12] [12] ;
short arr_8 [12] [12] ;
unsigned short arr_9 [12] [12] [12] [12] [12] ;
unsigned short arr_10 [12] [12] ;
unsigned short arr_11 [12] [12] [12] ;
long long int arr_12 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_13 [12] [12] [12] [12] [12] ;
unsigned long long int arr_14 [12] [12] [12] [12] [12] ;
int arr_17 [12] ;
unsigned int arr_18 [12] [12] [12] [12] [12] ;
unsigned short arr_19 [12] [12] ;
int arr_21 [12] [12] ;
short arr_26 [14] ;
unsigned long long int arr_27 [14] ;
unsigned short arr_28 [14] ;
unsigned short arr_30 [18] ;
unsigned long long int arr_31 [18] ;
signed char arr_32 [18] ;
int arr_33 [18] [18] [18] ;
unsigned int arr_34 [18] ;
signed char arr_35 [18] ;
unsigned int arr_38 [18] ;
unsigned long long int arr_39 [18] ;
unsigned short arr_40 [18] ;
unsigned short arr_42 [18] ;
long long int arr_3 [12] ;
unsigned int arr_15 [12] [12] [12] [12] ;
unsigned short arr_20 [12] [12] [12] [12] [12] [12] ;
int arr_24 [12] ;
unsigned long long int arr_29 [14] ;
_Bool arr_36 [18] [18] ;
unsigned short arr_37 [18] [18] [18] ;
_Bool arr_41 [18] [18] [18] ;
unsigned long long int arr_44 [18] [18] [18] ;
signed char arr_45 [18] ;
short arr_46 [18] ;
signed char arr_51 [10] ;
long long int arr_52 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3694484734U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 4034860991899999843ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)15714;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)27154;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (short)9224;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)28126 : (unsigned short)1515;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56623 : (unsigned short)40930;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)45117;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? -8845838820766425936LL : 4974466147626255839LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 786669864U : 1789819025U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 11899878669939502860ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 609419420;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 2254345715U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)41588;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = 500805713;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (short)-30399;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = 5699747157637669400ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (unsigned short)47827;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = (unsigned short)19503;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = 15562789923090646379ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 925644589;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_34 [i_0] = 3365761525U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_35 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = 1432306846U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_39 [i_0] = 2847259943157118394ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = (unsigned short)28665;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = (unsigned short)28841;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1133666361352884931LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 120729701U : 337039598U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)27988;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = -1277483153;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = 7284225754330967851ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_36 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned short)39087;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 15837068841195903579ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_45 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_46 [i_0] = (short)-26607;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? (signed char)104 : (signed char)84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? -8088913842003292564LL : 3546369387470078407LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
