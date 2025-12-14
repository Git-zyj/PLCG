#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4478898938727233394LL;
unsigned short var_8 = (unsigned short)62100;
long long int var_9 = 3069798447152216630LL;
unsigned short var_10 = (unsigned short)36603;
unsigned long long int var_11 = 17215108759959537481ULL;
signed char var_14 = (signed char)-45;
int zero = 0;
unsigned short var_18 = (unsigned short)20409;
long long int var_19 = -862782810451493206LL;
signed char var_20 = (signed char)-45;
int var_21 = -1681395376;
int var_22 = 684469461;
long long int var_23 = -2075172459372210864LL;
short var_24 = (short)-23772;
unsigned char var_25 = (unsigned char)100;
unsigned long long int var_26 = 11867303531561331421ULL;
short var_27 = (short)-2273;
_Bool var_28 = (_Bool)0;
long long int var_29 = -8739018956225007532LL;
unsigned char var_30 = (unsigned char)104;
long long int var_31 = 2344897338589095569LL;
long long int var_32 = -7718577037494274295LL;
long long int var_33 = -7253572848110678711LL;
signed char var_34 = (signed char)-67;
unsigned long long int var_35 = 15416686667108359101ULL;
unsigned char var_36 = (unsigned char)94;
short var_37 = (short)26751;
long long int arr_0 [13] [13] ;
short arr_1 [13] ;
unsigned short arr_2 [13] [13] ;
long long int arr_5 [13] ;
unsigned long long int arr_7 [13] ;
unsigned long long int arr_9 [13] ;
int arr_10 [13] ;
short arr_11 [13] [13] [13] ;
_Bool arr_18 [13] ;
unsigned long long int arr_31 [13] ;
long long int arr_34 [13] [13] [13] ;
_Bool arr_3 [13] ;
signed char arr_4 [13] ;
signed char arr_8 [13] ;
unsigned short arr_13 [13] [13] [13] ;
unsigned short arr_23 [13] [13] [13] [13] ;
unsigned int arr_24 [13] ;
unsigned short arr_30 [13] [13] ;
signed char arr_42 [13] [13] ;
short arr_55 [13] [13] ;
signed char arr_56 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 534825360412395643LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)12400;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)45073;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3787502708058072792LL : 8496265968683347146LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 7319992151335543194ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 4260339110355117791ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = -1702706147;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)21641;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = 10309026118056235885ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 4081636329705767301LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-29 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)2946;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned short)23458;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = 3432533893U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)59705 : (unsigned short)32401;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_42 [i_0] [i_1] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_55 [i_0] [i_1] = (short)7779;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (signed char)81;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_55 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
