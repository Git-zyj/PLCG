#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1562882122U;
unsigned long long int var_1 = 16278685674629065025ULL;
unsigned int var_2 = 1844105999U;
unsigned char var_3 = (unsigned char)169;
long long int var_4 = -1159326492732746060LL;
unsigned char var_5 = (unsigned char)38;
unsigned int var_6 = 1004899205U;
long long int var_7 = 4711484980724353720LL;
unsigned long long int var_8 = 357415410404191917ULL;
long long int var_10 = 5365027406690306855LL;
long long int var_11 = -6092459148956481301LL;
long long int var_12 = 7243353428429026383LL;
long long int var_13 = 9066804092382599131LL;
long long int var_14 = -1159957310874667735LL;
int zero = 0;
long long int var_15 = -5418371695899339680LL;
unsigned int var_16 = 3964249426U;
unsigned int var_17 = 2066581815U;
long long int var_18 = 2228526569033111516LL;
long long int var_19 = -1744410258802693512LL;
unsigned int var_20 = 4152054729U;
long long int var_21 = 4000356766339257378LL;
unsigned char var_22 = (unsigned char)122;
long long int var_23 = -1553186519008779861LL;
long long int var_24 = 7717831072593589937LL;
long long int var_25 = -6210523363458167134LL;
long long int var_26 = 8352068811498187142LL;
long long int var_27 = -5328780878420880956LL;
short var_28 = (short)-27553;
unsigned long long int var_29 = 13840647235041149246ULL;
long long int var_30 = -2345999925690893694LL;
short var_31 = (short)-28221;
unsigned long long int var_32 = 16245010097549580115ULL;
long long int var_33 = -6758261006027381355LL;
long long int var_34 = -2016563888187770211LL;
long long int var_35 = -3305229842370330LL;
long long int var_36 = -8099800132709157796LL;
unsigned int var_37 = 3924173705U;
long long int var_38 = -1694936907145610790LL;
unsigned long long int var_39 = 2357265671504062039ULL;
long long int var_40 = -1463018411670830882LL;
unsigned long long int var_41 = 6373677544684149995ULL;
long long int var_42 = -1578687201803828173LL;
long long int var_43 = -2555471698400962084LL;
short var_44 = (short)3761;
short var_45 = (short)15732;
long long int var_46 = 3037287928773232164LL;
long long int arr_5 [25] [25] [25] ;
unsigned char arr_10 [25] [25] [25] ;
long long int arr_13 [25] [25] [25] [25] [25] ;
unsigned char arr_49 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2690946063245257383LL : 5905478552745836089LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)146 : (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -4789580896129697061LL : 2805122837145123151LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)181 : (unsigned char)243;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_49 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
