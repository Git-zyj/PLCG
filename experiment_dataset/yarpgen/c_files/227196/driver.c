#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26739;
signed char var_7 = (signed char)25;
long long int var_9 = 8193900343653109915LL;
unsigned short var_12 = (unsigned short)43506;
long long int var_17 = -7892262045411188915LL;
unsigned long long int var_18 = 7407831939131251883ULL;
int zero = 0;
int var_20 = -1520216398;
unsigned long long int var_21 = 6554058679963897383ULL;
signed char var_22 = (signed char)106;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)37163;
unsigned short var_25 = (unsigned short)64775;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 2368097040222603339ULL;
unsigned short var_28 = (unsigned short)23927;
signed char var_29 = (signed char)38;
unsigned short var_30 = (unsigned short)5673;
short var_31 = (short)-3286;
unsigned short var_32 = (unsigned short)7795;
signed char var_33 = (signed char)-115;
signed char var_34 = (signed char)67;
unsigned short var_35 = (unsigned short)27332;
unsigned short var_36 = (unsigned short)51522;
unsigned short var_37 = (unsigned short)27468;
unsigned short var_38 = (unsigned short)40601;
_Bool var_39 = (_Bool)0;
unsigned short arr_0 [19] ;
long long int arr_9 [17] [17] ;
unsigned short arr_10 [17] ;
unsigned char arr_12 [22] [22] ;
unsigned short arr_14 [22] [22] [22] ;
signed char arr_23 [22] [22] [22] [22] ;
unsigned short arr_24 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)13650;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 6379973707106707357LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned short)9914;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)25158;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)76 : (signed char)115;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)65272;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
