#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)51352;
int var_6 = 341246559;
unsigned char var_9 = (unsigned char)204;
signed char var_10 = (signed char)-52;
unsigned char var_11 = (unsigned char)235;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)9390;
unsigned short var_20 = (unsigned short)36478;
short var_21 = (short)-3217;
long long int var_22 = -9115388725965489206LL;
long long int var_23 = -7601495375876120424LL;
unsigned short var_24 = (unsigned short)47223;
unsigned char var_25 = (unsigned char)46;
_Bool var_26 = (_Bool)0;
long long int var_27 = 828519083482594115LL;
signed char var_28 = (signed char)-123;
long long int var_29 = 4293958983112933410LL;
signed char var_30 = (signed char)117;
unsigned short var_31 = (unsigned short)5192;
unsigned short var_32 = (unsigned short)31461;
short var_33 = (short)-25234;
int var_34 = 301128330;
unsigned char var_35 = (unsigned char)138;
unsigned short var_36 = (unsigned short)55170;
long long int var_37 = -3447780093467892417LL;
_Bool var_38 = (_Bool)1;
unsigned short var_39 = (unsigned short)1564;
short arr_0 [19] [19] ;
int arr_1 [19] ;
unsigned char arr_2 [23] ;
unsigned char arr_3 [23] ;
unsigned long long int arr_4 [23] [23] [23] ;
unsigned char arr_5 [23] ;
unsigned char arr_6 [23] ;
int arr_7 [17] ;
unsigned char arr_8 [17] ;
int arr_9 [17] [17] ;
unsigned long long int arr_10 [17] ;
int arr_11 [17] [17] ;
long long int arr_12 [17] ;
_Bool arr_21 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-22547;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1747788385;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3446661584190643310ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 1107563520;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = -284477744;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 5738324833796759112ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 1519272887;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = -3692740862921450205LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
