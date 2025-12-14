#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2625761004296175596LL;
unsigned int var_1 = 4235186779U;
int var_2 = -17334239;
int var_3 = -31303491;
unsigned int var_6 = 2472230175U;
int var_7 = -1471426870;
unsigned int var_8 = 3365679608U;
int var_9 = 163197835;
long long int var_10 = 1786282944181148526LL;
int var_11 = 1686692164;
long long int var_12 = 1138455516490935982LL;
long long int var_13 = -4943666460530259367LL;
int zero = 0;
int var_14 = 226032071;
unsigned int var_15 = 3847404375U;
int var_16 = 111680806;
unsigned int var_17 = 1672870325U;
int var_18 = -1369953715;
int var_19 = 101886610;
unsigned int var_20 = 3533648633U;
int var_21 = 1008214600;
unsigned int var_22 = 3039412660U;
unsigned int var_23 = 778154743U;
int var_24 = 1587159012;
int var_25 = -363120504;
int var_26 = -374533319;
int var_27 = -61549712;
int var_28 = 2120839602;
long long int var_29 = 689920884054427423LL;
int var_30 = 1708724708;
unsigned int var_31 = 2089031017U;
int var_32 = -1022934474;
long long int var_33 = -438494885939169542LL;
int var_34 = -1341650208;
int arr_0 [10] ;
long long int arr_4 [24] ;
unsigned int arr_5 [24] ;
int arr_6 [24] [24] [24] ;
int arr_7 [24] [24] [24] ;
long long int arr_8 [24] [24] [24] ;
int arr_9 [24] ;
long long int arr_11 [19] ;
long long int arr_16 [19] ;
long long int arr_17 [19] [19] [19] ;
int arr_18 [19] ;
long long int arr_23 [19] [19] [19] [19] [19] ;
unsigned int arr_3 [10] ;
unsigned int arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 399962094;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1578019051276239559LL : -2969353705845852705LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 2197062697U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1227823084;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 655745482;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5832980214708684994LL : 1334060733852912148LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -941531441 : 1703223508;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -5299296469829854622LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 9148132415282883800LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 8213049136453289884LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = -221443386;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = -4320222426777971102LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 451650717U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 4146201284U;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
