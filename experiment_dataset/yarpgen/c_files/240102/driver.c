#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)73;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-3339;
unsigned long long int var_6 = 14990541363349463456ULL;
unsigned short var_7 = (unsigned short)21;
long long int var_8 = 2987433390247299865LL;
short var_9 = (short)31344;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 6860520722461919342ULL;
int var_12 = 946869692;
int var_13 = -1769569320;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3077423566U;
unsigned int var_16 = 3827504608U;
unsigned long long int var_17 = 11847585125292412338ULL;
signed char var_18 = (signed char)100;
int var_19 = 503311023;
unsigned int var_20 = 4282086079U;
_Bool var_21 = (_Bool)1;
int var_22 = -2133748506;
unsigned short var_23 = (unsigned short)48441;
long long int var_24 = -8638894129383099251LL;
long long int var_25 = -1056100124537183716LL;
signed char var_26 = (signed char)95;
short var_27 = (short)-5895;
unsigned int var_28 = 2179505326U;
short var_29 = (short)9174;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)0;
unsigned char var_32 = (unsigned char)126;
int var_33 = -949709461;
unsigned short var_34 = (unsigned short)60732;
short var_35 = (short)-2704;
unsigned long long int var_36 = 10993210669725312092ULL;
unsigned long long int var_37 = 8264814846690090366ULL;
unsigned char var_38 = (unsigned char)176;
short var_39 = (short)-12308;
unsigned int var_40 = 359187726U;
_Bool var_41 = (_Bool)1;
long long int var_42 = -4450406315424415295LL;
unsigned short arr_0 [21] ;
_Bool arr_1 [21] ;
long long int arr_3 [21] [21] ;
unsigned short arr_5 [21] [21] [21] ;
int arr_6 [21] ;
int arr_10 [21] [21] [21] ;
unsigned char arr_11 [21] ;
long long int arr_14 [21] [21] [21] [21] ;
unsigned int arr_15 [21] [21] [21] [21] ;
int arr_18 [21] [21] [21] [21] ;
long long int arr_20 [21] [21] [21] [21] [21] ;
int arr_26 [21] [21] [21] [21] [21] [21] ;
long long int arr_30 [21] [21] [21] [21] [21] ;
unsigned int arr_32 [21] [21] [21] ;
unsigned long long int arr_34 [21] ;
unsigned short arr_37 [21] [21] [21] [21] ;
unsigned long long int arr_47 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_9 [21] [21] ;
unsigned long long int arr_23 [21] [21] [21] ;
long long int arr_50 [21] ;
int arr_57 [11] ;
long long int arr_58 [11] [11] ;
signed char arr_59 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)44130;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -8501993690588962923LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)2833;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1208582395;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 744837999;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -693369591546924884LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1746323110U : 3631470097U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -1276010283;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -4335169793771204500LL : 8542599193478557530LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 785457323;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = -6529808430990226765LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 3272239007U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = 10764116700283534930ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11292;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9717897138180404981ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 1161928903U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8584653906157866017ULL : 17914931014329171519ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_50 [i_0] = 4649552450390850829LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_57 [i_0] = -2035652369;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_58 [i_0] [i_1] = 2842367226510854680LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_59 [i_0] = (signed char)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_57 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_58 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_59 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
