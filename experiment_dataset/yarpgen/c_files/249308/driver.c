#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
_Bool var_2 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 4040907991U;
unsigned short var_14 = (unsigned short)55788;
short var_15 = (short)-25022;
unsigned long long int var_18 = 8989373877687575393ULL;
int zero = 0;
signed char var_19 = (signed char)77;
short var_20 = (short)28829;
unsigned long long int var_21 = 1487572733252535103ULL;
unsigned long long int var_22 = 17055096963170019734ULL;
unsigned char var_23 = (unsigned char)217;
unsigned char var_24 = (unsigned char)108;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)47650;
unsigned char var_27 = (unsigned char)104;
unsigned long long int var_28 = 12465158001868834473ULL;
signed char var_29 = (signed char)36;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 11115496072102726106ULL;
_Bool var_32 = (_Bool)0;
unsigned int var_33 = 2446020885U;
unsigned long long int var_34 = 16500886643105062513ULL;
_Bool var_35 = (_Bool)1;
unsigned int var_36 = 2226948557U;
unsigned char var_37 = (unsigned char)254;
unsigned char var_38 = (unsigned char)157;
_Bool var_39 = (_Bool)0;
unsigned int arr_0 [25] ;
short arr_1 [25] ;
long long int arr_2 [25] [25] ;
_Bool arr_5 [25] [25] [25] ;
unsigned int arr_7 [19] ;
unsigned long long int arr_8 [11] ;
_Bool arr_12 [11] [11] [11] ;
unsigned int arr_13 [11] [11] ;
long long int arr_21 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2248955684U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)29712;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 414278759618236947LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 2619352344U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 14355464811735978206ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = 84366624U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6657571183306402981LL : 6111613462553219127LL;
}

void checksum() {
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
