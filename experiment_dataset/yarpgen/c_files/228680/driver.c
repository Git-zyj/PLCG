#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17212224737106485599ULL;
int var_1 = -148280029;
long long int var_3 = 849540644702015720LL;
int var_4 = 1564743235;
unsigned int var_5 = 223194132U;
unsigned short var_6 = (unsigned short)10228;
unsigned char var_7 = (unsigned char)124;
unsigned int var_8 = 1340766104U;
unsigned int var_9 = 2096626754U;
unsigned long long int var_10 = 9280962101972721732ULL;
unsigned short var_11 = (unsigned short)59985;
signed char var_12 = (signed char)120;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11915442531675818072ULL;
int var_16 = 761837853;
int var_17 = 794110908;
int zero = 0;
unsigned int var_18 = 2693131137U;
unsigned long long int var_19 = 10616895042276089853ULL;
unsigned short var_20 = (unsigned short)33592;
long long int var_21 = -6803800884584881604LL;
unsigned long long int var_22 = 85163771352790882ULL;
long long int var_23 = 6356671431901711462LL;
long long int var_24 = -649475961069259770LL;
unsigned char var_25 = (unsigned char)29;
long long int var_26 = 4866821384052036958LL;
long long int var_27 = -1100338877707622205LL;
long long int var_28 = 4430458330183908817LL;
signed char var_29 = (signed char)63;
long long int arr_0 [13] ;
int arr_1 [13] ;
long long int arr_2 [13] ;
long long int arr_4 [13] ;
signed char arr_5 [13] [13] [13] ;
long long int arr_9 [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] [13] [13] [13] ;
_Bool arr_11 [13] [13] [13] [13] ;
unsigned int arr_12 [13] ;
long long int arr_15 [13] [13] [13] [13] ;
unsigned int arr_23 [13] [13] ;
unsigned long long int arr_24 [13] ;
long long int arr_27 [13] [13] [13] ;
long long int arr_29 [22] [22] ;
unsigned short arr_30 [22] ;
long long int arr_33 [22] [22] ;
unsigned char arr_34 [22] [22] ;
long long int arr_3 [13] ;
unsigned long long int arr_14 [13] [13] [13] [13] ;
long long int arr_21 [13] ;
unsigned char arr_22 [13] [13] [13] [13] [13] ;
unsigned long long int arr_25 [13] ;
signed char arr_26 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -6362765690449184451LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -2127329265;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 4985497434790562153LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 813537465401625349LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 7392016761162666921LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 13366283983678001292ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 1284785310U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 6598230430472466612LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = 1595172139U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = 6638124778261788634ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1589431141376684741LL : 1796562550363611021LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = 2551638579591914056LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = (unsigned short)46751;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = 2259390987912561567LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -4339401598291275821LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 17910255652981555801ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = 6385340019367664499LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = 11423495112718882253ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)-124;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
