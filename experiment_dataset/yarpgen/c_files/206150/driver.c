#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6504159932090591769ULL;
int var_1 = -1398875490;
unsigned int var_2 = 187315456U;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-125;
long long int var_8 = -9073389120660941730LL;
unsigned short var_9 = (unsigned short)37034;
unsigned char var_11 = (unsigned char)244;
unsigned long long int var_12 = 3034720510717392978ULL;
unsigned long long int var_13 = 17436693230323738602ULL;
unsigned char var_14 = (unsigned char)2;
unsigned char var_15 = (unsigned char)182;
int zero = 0;
unsigned char var_16 = (unsigned char)139;
long long int var_17 = 2392263715935602771LL;
long long int var_18 = -238438226128282026LL;
int var_19 = 1186237999;
unsigned long long int var_20 = 4555252128591909832ULL;
unsigned long long int var_21 = 5969804535153334082ULL;
unsigned short var_22 = (unsigned short)16623;
unsigned char var_23 = (unsigned char)147;
long long int var_24 = 8501380935686393929LL;
_Bool var_25 = (_Bool)1;
int var_26 = 1834642346;
unsigned long long int var_27 = 5239728860812927745ULL;
signed char var_28 = (signed char)-4;
unsigned char var_29 = (unsigned char)186;
unsigned long long int var_30 = 3934774115731917404ULL;
unsigned int var_31 = 1262131429U;
int var_32 = -1658034533;
unsigned long long int var_33 = 6043954347431654767ULL;
unsigned long long int var_34 = 4406735119038292732ULL;
unsigned char var_35 = (unsigned char)87;
unsigned long long int var_36 = 7674830309101496360ULL;
signed char var_37 = (signed char)-80;
_Bool var_38 = (_Bool)0;
unsigned long long int var_39 = 15488040664752449915ULL;
signed char var_40 = (signed char)-27;
unsigned long long int var_41 = 314856125262192172ULL;
int var_42 = -12645746;
unsigned char var_43 = (unsigned char)155;
long long int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
signed char arr_3 [16] ;
unsigned short arr_4 [16] ;
unsigned short arr_6 [16] ;
unsigned char arr_7 [16] [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
long long int arr_16 [16] [16] [16] ;
unsigned char arr_19 [16] [16] [16] [16] [16] ;
unsigned long long int arr_20 [16] [16] [16] [16] [16] ;
unsigned long long int arr_25 [16] [16] [16] [16] [16] [16] ;
int arr_26 [16] [16] [16] [16] [16] ;
long long int arr_38 [18] [18] ;
unsigned short arr_39 [18] [18] ;
unsigned char arr_42 [18] [18] [18] ;
unsigned char arr_46 [18] ;
unsigned char arr_2 [20] ;
long long int arr_9 [16] [16] ;
int arr_22 [16] [16] [16] [16] [16] [16] ;
unsigned char arr_27 [16] [16] ;
signed char arr_28 [16] ;
int arr_34 [16] [16] [16] ;
unsigned char arr_35 [16] ;
unsigned char arr_36 [16] ;
unsigned short arr_43 [18] ;
unsigned char arr_51 [18] [18] ;
unsigned long long int arr_52 [18] [18] ;
long long int arr_53 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -834752031337740689LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 9710103987988237601ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)32591;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)43160;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 7526062206441846438ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 7513879410828345104LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 3333069625709970043ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7565411991458280243ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 69086473;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_38 [i_0] [i_1] = -4886428843409339589LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_39 [i_0] [i_1] = (unsigned short)43121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_46 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = -6647375581625986932LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1171516975 : 366244266;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 586484913;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_43 [i_0] = (unsigned short)5234;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_51 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_52 [i_0] [i_1] = 1993330075312888638ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_53 [i_0] [i_1] = -7664542680213586244LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_51 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
