#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59045;
unsigned int var_1 = 1700013764U;
signed char var_2 = (signed char)6;
signed char var_4 = (signed char)-62;
unsigned short var_6 = (unsigned short)39360;
signed char var_7 = (signed char)103;
unsigned int var_8 = 638351321U;
long long int var_9 = 6440561345548940955LL;
signed char var_10 = (signed char)-25;
unsigned char var_11 = (unsigned char)57;
int zero = 0;
long long int var_12 = 4393792424008192817LL;
int var_13 = -520406095;
unsigned short var_14 = (unsigned short)49002;
signed char var_15 = (signed char)110;
int var_16 = -1531790786;
unsigned char var_17 = (unsigned char)124;
unsigned long long int var_18 = 987350318814279834ULL;
unsigned char var_19 = (unsigned char)88;
unsigned int var_20 = 1753898621U;
unsigned char var_21 = (unsigned char)226;
signed char var_22 = (signed char)-81;
unsigned int var_23 = 1974742916U;
signed char var_24 = (signed char)36;
int var_25 = 217001586;
unsigned char var_26 = (unsigned char)21;
unsigned int var_27 = 2921216270U;
unsigned char var_28 = (unsigned char)138;
signed char var_29 = (signed char)23;
unsigned char var_30 = (unsigned char)54;
unsigned short var_31 = (unsigned short)31102;
unsigned short arr_0 [25] [25] ;
signed char arr_1 [25] [25] ;
unsigned short arr_2 [25] ;
signed char arr_3 [25] ;
long long int arr_6 [25] [25] ;
long long int arr_9 [25] [25] [25] ;
unsigned short arr_12 [25] ;
unsigned int arr_13 [25] [25] [25] ;
unsigned long long int arr_15 [25] [25] [25] [25] ;
int arr_16 [25] ;
unsigned short arr_17 [25] [25] [25] ;
signed char arr_23 [25] [25] [25] [25] ;
signed char arr_26 [25] [25] ;
unsigned char arr_29 [25] [25] ;
int arr_31 [25] ;
unsigned long long int arr_38 [25] [25] [25] [25] [25] [25] [25] ;
unsigned int arr_4 [25] ;
unsigned long long int arr_10 [25] [25] [25] [25] ;
unsigned char arr_14 [25] [25] [25] [25] ;
unsigned long long int arr_18 [25] [25] [25] [25] ;
unsigned short arr_28 [25] [25] [25] [25] [25] ;
_Bool arr_33 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)18933;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)19275;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = -8729994636154346479LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 7738565626507702182LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned short)48611;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2850301170U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 15742539418587591814ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = -1809041870;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)43805;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = 1549012414;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 8038973488448355554ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 3851857166U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 16215619031972685878ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 17346097598765676682ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)8171;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
