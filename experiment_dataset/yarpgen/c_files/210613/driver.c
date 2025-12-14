#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3853540711U;
unsigned long long int var_2 = 15348206764082379709ULL;
long long int var_3 = -1660941401933059556LL;
long long int var_4 = -3233193948661339604LL;
short var_7 = (short)32644;
unsigned long long int var_8 = 860683504160125656ULL;
signed char var_10 = (signed char)-10;
unsigned short var_11 = (unsigned short)58269;
unsigned char var_12 = (unsigned char)132;
long long int var_13 = 1352782361340466281LL;
unsigned int var_16 = 2835650409U;
int zero = 0;
int var_18 = 1866336083;
long long int var_19 = 4832567686206034079LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-105;
unsigned char var_22 = (unsigned char)50;
short var_23 = (short)10630;
long long int var_24 = -4492380800392014561LL;
signed char var_25 = (signed char)-48;
int var_26 = -287525263;
signed char var_27 = (signed char)45;
unsigned long long int var_28 = 3203118409519700314ULL;
int var_29 = 681075498;
unsigned long long int var_30 = 973968989758132721ULL;
signed char var_31 = (signed char)-68;
short var_32 = (short)-29515;
unsigned long long int var_33 = 4319161656348015779ULL;
unsigned char arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
_Bool arr_2 [10] ;
short arr_5 [10] ;
signed char arr_6 [10] [10] [10] ;
unsigned long long int arr_7 [10] [10] ;
short arr_9 [10] [10] [10] ;
int arr_10 [10] ;
unsigned int arr_11 [10] [10] [10] ;
unsigned short arr_17 [10] ;
signed char arr_18 [10] [10] [10] ;
long long int arr_20 [10] [10] ;
long long int arr_21 [10] [10] ;
short arr_22 [10] [10] ;
int arr_25 [10] ;
unsigned long long int arr_28 [10] [10] ;
unsigned long long int arr_34 [21] ;
long long int arr_35 [21] ;
long long int arr_36 [21] ;
int arr_37 [21] ;
unsigned long long int arr_38 [21] [21] [21] ;
unsigned long long int arr_39 [21] [21] [21] ;
short arr_42 [22] [22] ;
long long int arr_43 [22] [22] ;
_Bool arr_4 [10] ;
unsigned long long int arr_8 [10] ;
unsigned int arr_15 [10] ;
int arr_16 [10] [10] [10] ;
unsigned long long int arr_19 [10] [10] ;
long long int arr_23 [10] ;
unsigned char arr_24 [10] [10] ;
_Bool arr_29 [10] ;
_Bool arr_30 [10] ;
long long int arr_41 [21] [21] ;
int arr_45 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 7637195049012107523ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)30146;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 6531957090593321125ULL : 3530720110591980106ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)32075;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 1844294428;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 581817349U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (unsigned short)2201;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = 2571763439977158445LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = 6846436524633013716LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = (short)25231;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = -1774138333;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_28 [i_0] [i_1] = 18349883361143137716ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = 7312356118856094764ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = -2939724061747738471LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_36 [i_0] = -581255048547090682LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = -1948632755;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 9921850196002814652ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 17039765403381606069ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_42 [i_0] [i_1] = (short)-2570;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_43 [i_0] [i_1] = 1479156437503371496LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 350889917497775998ULL : 7391617537541566336ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 2006924217U : 3901633704U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1510137684 : -640263254;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = 1504941618075286217ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = 5645967279247428645LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_41 [i_0] [i_1] = 6002613612070500740LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_45 [i_0] = 1065481735;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
