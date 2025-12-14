#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
unsigned short var_4 = (unsigned short)60241;
int var_9 = -493589288;
unsigned char var_10 = (unsigned char)123;
unsigned int var_13 = 3406895101U;
unsigned char var_14 = (unsigned char)132;
long long int var_16 = -1049476492470737098LL;
unsigned char var_19 = (unsigned char)60;
int zero = 0;
int var_20 = 1526467021;
long long int var_21 = 1770930883205522724LL;
unsigned short var_22 = (unsigned short)34457;
long long int var_23 = -196514908572041543LL;
signed char var_24 = (signed char)24;
long long int var_25 = -5554452725977396733LL;
unsigned char var_26 = (unsigned char)213;
unsigned char var_27 = (unsigned char)30;
unsigned short var_28 = (unsigned short)32209;
long long int var_29 = 6246190452718087595LL;
unsigned short var_30 = (unsigned short)54287;
int var_31 = 316391885;
long long int var_32 = 2487444313440684594LL;
long long int var_33 = 8984387301577078655LL;
unsigned short var_34 = (unsigned short)11381;
long long int var_35 = 6389778927117872757LL;
long long int var_36 = -2674118696142161576LL;
int var_37 = -297767316;
unsigned int var_38 = 2351145340U;
unsigned char var_39 = (unsigned char)208;
unsigned short var_40 = (unsigned short)58939;
unsigned char var_41 = (unsigned char)218;
long long int var_42 = 2542615250347572884LL;
unsigned char var_43 = (unsigned char)231;
long long int var_44 = -1585376299507452159LL;
signed char var_45 = (signed char)-78;
long long int var_46 = -7248403100476076335LL;
unsigned char arr_0 [15] ;
long long int arr_1 [15] [15] ;
signed char arr_4 [15] [15] ;
unsigned int arr_11 [17] ;
unsigned short arr_12 [17] ;
long long int arr_13 [17] [17] ;
unsigned char arr_15 [23] ;
unsigned int arr_17 [23] ;
unsigned short arr_18 [23] ;
unsigned short arr_19 [19] ;
long long int arr_21 [17] ;
signed char arr_32 [17] ;
int arr_33 [17] [17] ;
signed char arr_34 [17] [17] [17] [17] ;
signed char arr_37 [17] [17] [17] [17] [17] ;
long long int arr_39 [17] [17] [17] [17] [17] [17] ;
unsigned int arr_44 [12] ;
long long int arr_46 [12] ;
unsigned char arr_2 [15] [15] ;
unsigned char arr_14 [17] [17] ;
long long int arr_35 [17] [17] ;
unsigned char arr_41 [17] [17] [17] [17] [17] ;
signed char arr_42 [17] [17] [17] [17] ;
int arr_43 [17] ;
unsigned char arr_49 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -2934041662959151920LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 2719097514U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (unsigned short)23387;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 5216745586318733023LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 2299436138U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (unsigned short)24924;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (unsigned short)35270;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = 5997479470543164484LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_32 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_33 [i_0] [i_1] = -1506185809;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-17 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)98 : (signed char)91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8871760143364891441LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 922182180U : 1839916928U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? 3928725747494741194LL : 8362590391285204611LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_35 [i_0] [i_1] = (i_1 % 2 == 0) ? 8698353025000781025LL : -8596915654800329886LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)106 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)120 : (signed char)50;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_43 [i_0] = 1086004184;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_49 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)32 : (unsigned char)218;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
