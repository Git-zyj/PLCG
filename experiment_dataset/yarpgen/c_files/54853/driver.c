#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
long long int var_1 = -719560493154032707LL;
signed char var_2 = (signed char)-90;
unsigned short var_3 = (unsigned short)16540;
long long int var_4 = -6888920814789219339LL;
signed char var_5 = (signed char)23;
long long int var_8 = -138692696506794014LL;
long long int var_9 = -7204391736460806039LL;
unsigned short var_10 = (unsigned short)32907;
int zero = 0;
signed char var_11 = (signed char)11;
long long int var_12 = -8144146228212557446LL;
signed char var_13 = (signed char)16;
signed char var_14 = (signed char)83;
long long int var_15 = 4093662829275415175LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -9109567437813064408LL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)64;
long long int var_20 = -3481505761924180981LL;
long long int var_21 = -6729106431003900351LL;
long long int var_22 = 327310119199880439LL;
long long int var_23 = -1453376699244006845LL;
unsigned short var_24 = (unsigned short)13816;
signed char var_25 = (signed char)-87;
unsigned short var_26 = (unsigned short)60769;
_Bool var_27 = (_Bool)0;
long long int var_28 = -6051541872114617534LL;
unsigned short var_29 = (unsigned short)47;
long long int var_30 = -2505042847792795731LL;
long long int var_31 = -3316808749950181718LL;
unsigned short arr_0 [22] [22] ;
signed char arr_1 [22] ;
unsigned short arr_5 [22] ;
long long int arr_8 [22] [22] [22] ;
long long int arr_10 [22] [22] [22] [22] [22] [22] [22] ;
long long int arr_11 [22] [22] [22] [22] [22] ;
unsigned short arr_26 [11] [11] [11] [11] ;
long long int arr_27 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)51010;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)5164;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -7192498369054293086LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 819113376298429421LL : 4525287995514515106LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 7647169148461178035LL : -8826131294603435204LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)32406 : (unsigned short)38264;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? 3917911484887367548LL : -4249464907789739794LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
