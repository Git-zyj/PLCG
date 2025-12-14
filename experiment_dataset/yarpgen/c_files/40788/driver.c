#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1629704065;
int var_1 = 885336568;
unsigned long long int var_5 = 18089322889841475983ULL;
unsigned long long int var_6 = 15686133221590958729ULL;
unsigned long long int var_7 = 15692175814985055111ULL;
unsigned long long int var_8 = 39512213575191526ULL;
int var_9 = 291176666;
int zero = 0;
int var_11 = 1530090315;
int var_12 = -1601252240;
unsigned long long int var_13 = 15296656561570513615ULL;
unsigned long long int var_14 = 7106325220807664559ULL;
int var_15 = -1915284634;
unsigned long long int var_16 = 15353501658889607205ULL;
int var_17 = -104283224;
int var_18 = 669364581;
unsigned long long int var_19 = 13729321105325532647ULL;
unsigned long long int var_20 = 12767970944340749044ULL;
unsigned long long int var_21 = 11393497340427449828ULL;
int var_22 = -1504079891;
int var_23 = -52922154;
int var_24 = -1793545840;
unsigned long long int var_25 = 6250598359706476503ULL;
unsigned long long int var_26 = 5555066760551065786ULL;
unsigned long long int var_27 = 7125980798299180565ULL;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_8 [18] [18] ;
unsigned long long int arr_9 [18] ;
unsigned long long int arr_12 [18] [18] [18] ;
unsigned long long int arr_13 [18] ;
unsigned long long int arr_14 [18] [18] [18] ;
unsigned long long int arr_15 [18] [18] [18] ;
unsigned long long int arr_22 [18] [18] ;
int arr_6 [15] [15] [15] ;
int arr_18 [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_19 [18] ;
unsigned long long int arr_28 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 16384434605038941824ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 17086787874381806619ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 9794272596169609073ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 11916519943160656561ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 7464012958992355240ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 11546692704812335853ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 13283826231257978374ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 9849028393123673112ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = 10168168351257606434ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1443029256 : -1387692460;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1208508225;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 6304653671933956803ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9768320487713122972ULL : 662658267162540240ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
