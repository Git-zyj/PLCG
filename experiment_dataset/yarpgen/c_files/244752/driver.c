#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25048;
unsigned long long int var_1 = 5828998995002419000ULL;
unsigned long long int var_2 = 3734713248467683150ULL;
unsigned long long int var_3 = 2597506152572893266ULL;
short var_4 = (short)2734;
_Bool var_5 = (_Bool)1;
short var_6 = (short)31489;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)179;
short var_9 = (short)-31147;
signed char var_10 = (signed char)86;
unsigned int var_11 = 832907382U;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)82;
int var_14 = 1363533839;
unsigned char var_15 = (unsigned char)105;
long long int var_16 = 5942425713795975570LL;
short var_17 = (short)-3724;
unsigned long long int var_18 = 12776045836173153925ULL;
short var_19 = (short)-21687;
int zero = 0;
unsigned long long int var_20 = 3219301255970962689ULL;
unsigned int var_21 = 543254105U;
signed char var_22 = (signed char)-17;
int var_23 = -745890620;
long long int var_24 = -1539166444765876478LL;
unsigned long long int var_25 = 8509668138705596162ULL;
signed char var_26 = (signed char)-34;
unsigned char var_27 = (unsigned char)187;
long long int var_28 = 3120736371173563153LL;
unsigned short var_29 = (unsigned short)44393;
signed char var_30 = (signed char)20;
long long int var_31 = 7512834691809686998LL;
_Bool var_32 = (_Bool)1;
_Bool var_33 = (_Bool)0;
_Bool var_34 = (_Bool)0;
long long int var_35 = -3504541129372072258LL;
unsigned int var_36 = 2104180747U;
unsigned char var_37 = (unsigned char)184;
unsigned short var_38 = (unsigned short)50579;
unsigned char var_39 = (unsigned char)77;
unsigned long long int var_40 = 13744038288037738341ULL;
_Bool var_41 = (_Bool)1;
signed char var_42 = (signed char)23;
short var_43 = (short)8477;
_Bool var_44 = (_Bool)1;
short var_45 = (short)8865;
int var_46 = 914689686;
unsigned char var_47 = (unsigned char)112;
short var_48 = (short)-23849;
short var_49 = (short)-28386;
short var_50 = (short)24054;
int var_51 = 612518809;
short arr_2 [19] [19] ;
unsigned long long int arr_11 [19] [19] [19] [19] ;
unsigned int arr_15 [19] ;
unsigned long long int arr_36 [19] [19] [19] ;
unsigned long long int arr_37 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)27931;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 11066794467095522321ULL : 844605463847311480ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 2736802316U : 2460927302U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 560068118957124741ULL : 8721512320839055569ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 6937395490780792452ULL : 11283374796755065258ULL;
}

void checksum() {
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
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
