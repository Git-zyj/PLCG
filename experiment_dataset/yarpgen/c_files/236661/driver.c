#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 960567678195332781ULL;
unsigned long long int var_2 = 3436034894962262302ULL;
unsigned short var_3 = (unsigned short)24713;
unsigned short var_5 = (unsigned short)32259;
long long int var_7 = -6438514983899736951LL;
long long int var_8 = -2907974786846492698LL;
unsigned short var_9 = (unsigned short)21003;
int zero = 0;
long long int var_10 = -1639218034727243240LL;
unsigned short var_11 = (unsigned short)58601;
unsigned short var_12 = (unsigned short)57383;
unsigned long long int var_13 = 8833194831637415597ULL;
unsigned long long int var_14 = 8286121595483309218ULL;
unsigned short var_15 = (unsigned short)52462;
unsigned long long int var_16 = 5987102457846449982ULL;
long long int var_17 = -6840794502101976538LL;
long long int var_18 = 3708323819140181799LL;
unsigned short var_19 = (unsigned short)17409;
long long int var_20 = -6750419446731223560LL;
unsigned long long int var_21 = 2081102371216284317ULL;
long long int var_22 = -7962313669071365653LL;
unsigned short var_23 = (unsigned short)12689;
unsigned short var_24 = (unsigned short)28594;
long long int var_25 = -4342693074108169788LL;
unsigned long long int var_26 = 10783980101175552733ULL;
unsigned short var_27 = (unsigned short)37591;
long long int var_28 = 6107291808471630180LL;
unsigned long long int var_29 = 15741439025232348393ULL;
unsigned long long int var_30 = 3298242024621991423ULL;
long long int var_31 = -7421716833464929797LL;
unsigned short var_32 = (unsigned short)31218;
long long int var_33 = -3729652355517905028LL;
unsigned short var_34 = (unsigned short)57039;
long long int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
long long int arr_5 [13] [13] ;
long long int arr_6 [13] [13] ;
long long int arr_7 [13] [13] [13] [13] ;
long long int arr_10 [13] [13] [13] [13] [13] ;
long long int arr_11 [13] [13] [13] [13] ;
unsigned short arr_14 [13] ;
unsigned long long int arr_15 [13] [13] ;
long long int arr_17 [13] [13] ;
unsigned long long int arr_18 [13] [13] ;
unsigned short arr_19 [13] [13] [13] ;
unsigned long long int arr_22 [13] [13] [13] [13] ;
unsigned short arr_2 [13] ;
unsigned short arr_9 [13] [13] ;
long long int arr_20 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -7883627563513677516LL : 7321115546229937104LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 9096474138410355682ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = -1575825191289759247LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -5404952986585106318LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 6093837500166764943LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -3464979032713424008LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 3346521004045014430LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6486 : (unsigned short)12271;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 745795469737849043ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = 1231243145049374890LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = 1361009716864180615ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)23914;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 3700161674799230943ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58594 : (unsigned short)7238;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)61249 : (unsigned short)44736;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 690537400237698159LL : 5797094406523409127LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
