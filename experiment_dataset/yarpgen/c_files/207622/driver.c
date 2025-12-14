#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34313;
unsigned int var_1 = 1152864536U;
unsigned int var_2 = 2238526343U;
unsigned char var_3 = (unsigned char)87;
unsigned char var_4 = (unsigned char)120;
unsigned short var_5 = (unsigned short)1384;
unsigned int var_7 = 2548658073U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)142;
unsigned int var_10 = 3547436401U;
unsigned int var_11 = 1713070930U;
unsigned char var_12 = (unsigned char)101;
long long int var_14 = -9153053673191496454LL;
unsigned long long int var_15 = 17095785182973059499ULL;
unsigned int var_16 = 3950434767U;
int zero = 0;
signed char var_17 = (signed char)-67;
unsigned int var_18 = 3697089064U;
unsigned char var_19 = (unsigned char)168;
long long int var_20 = -8938914805208696479LL;
unsigned int var_21 = 1749832334U;
unsigned short var_22 = (unsigned short)64804;
unsigned int var_23 = 3877849205U;
_Bool var_24 = (_Bool)0;
long long int var_25 = -4653790560593915968LL;
long long int var_26 = 1346259692968457655LL;
unsigned short var_27 = (unsigned short)1610;
unsigned char var_28 = (unsigned char)5;
long long int var_29 = 8885918062160095503LL;
unsigned char var_30 = (unsigned char)154;
unsigned long long int var_31 = 17068754863419269198ULL;
unsigned int var_32 = 3341875422U;
unsigned char var_33 = (unsigned char)20;
long long int var_34 = -8078878418965768983LL;
long long int var_35 = -5522454515114566860LL;
unsigned char var_36 = (unsigned char)30;
unsigned char var_37 = (unsigned char)218;
unsigned short var_38 = (unsigned short)18734;
unsigned char var_39 = (unsigned char)176;
unsigned short var_40 = (unsigned short)58451;
signed char var_41 = (signed char)38;
signed char var_42 = (signed char)1;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
unsigned long long int arr_3 [15] [15] ;
unsigned char arr_6 [15] ;
unsigned char arr_7 [15] [15] ;
unsigned char arr_8 [15] [15] ;
unsigned char arr_10 [15] [15] [15] ;
unsigned int arr_12 [15] [15] ;
unsigned short arr_13 [15] [15] [15] ;
signed char arr_14 [15] [15] [15] [15] ;
unsigned char arr_17 [15] [15] [15] [15] ;
unsigned char arr_18 [15] ;
unsigned char arr_26 [15] [15] [15] [15] ;
unsigned char arr_27 [15] [15] ;
unsigned int arr_31 [15] [15] [15] ;
_Bool arr_32 [15] [15] [15] ;
unsigned int arr_40 [15] [15] ;
unsigned char arr_4 [15] ;
unsigned char arr_5 [15] ;
unsigned char arr_19 [15] [15] [15] ;
unsigned char arr_24 [15] ;
signed char arr_38 [15] [15] ;
unsigned int arr_42 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 7491927905228411058ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 10013108373398313371ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 6244703268993405702ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)181 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 2483324361U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)3876 : (unsigned short)52114;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)5 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 1297047928U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_40 [i_0] [i_1] = 619493486U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)128 : (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)127 : (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_38 [i_0] [i_1] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = 2439770500U;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
