#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16422259938726418556ULL;
unsigned char var_1 = (unsigned char)115;
unsigned short var_2 = (unsigned short)35261;
unsigned long long int var_3 = 958155780307576863ULL;
unsigned short var_4 = (unsigned short)59929;
unsigned int var_5 = 3187844911U;
int var_6 = 2046975454;
unsigned char var_7 = (unsigned char)143;
unsigned int var_8 = 4010686808U;
long long int var_9 = 8522638901459287226LL;
unsigned long long int var_10 = 9213495849114665592ULL;
int var_11 = 1089586217;
short var_12 = (short)-31894;
long long int var_13 = 7041462237099010944LL;
unsigned long long int var_14 = 9535148056423972070ULL;
unsigned int var_15 = 522994274U;
unsigned long long int var_16 = 15766760320150401516ULL;
int zero = 0;
signed char var_18 = (signed char)30;
unsigned short var_19 = (unsigned short)38981;
unsigned int var_20 = 1870644712U;
unsigned int var_21 = 749050668U;
signed char var_22 = (signed char)12;
unsigned short var_23 = (unsigned short)22897;
short var_24 = (short)3718;
unsigned char var_25 = (unsigned char)194;
long long int var_26 = -4417949569121652794LL;
unsigned long long int var_27 = 2829940294888518982ULL;
unsigned long long int var_28 = 13871612654575935007ULL;
long long int var_29 = -458263551523486785LL;
_Bool var_30 = (_Bool)1;
int var_31 = 1121914743;
unsigned char var_32 = (unsigned char)216;
unsigned int var_33 = 3668634983U;
unsigned char var_34 = (unsigned char)66;
unsigned int arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
signed char arr_2 [17] ;
unsigned int arr_3 [17] [17] [17] ;
long long int arr_4 [17] ;
unsigned int arr_5 [17] [17] [17] ;
int arr_6 [17] ;
long long int arr_8 [17] ;
unsigned char arr_9 [17] ;
unsigned long long int arr_10 [21] [21] ;
unsigned int arr_11 [21] [21] ;
long long int arr_12 [21] [21] [21] ;
signed char arr_13 [21] ;
unsigned long long int arr_14 [21] ;
int arr_15 [21] ;
unsigned short arr_16 [21] [21] [21] [21] ;
unsigned long long int arr_17 [21] ;
long long int arr_19 [21] [21] [21] [21] [21] ;
unsigned int arr_20 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 21794637U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3296032933U : 1362081983U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 5910752299593561156LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 165832957U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 477465217;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -6431599313955385987LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 848627655827837516ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 3151952306U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2471467450761566425LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 17419498154903009840ULL : 17973569100068663974ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 1622565855;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)53500;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 8019494234450334253ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 1447817752677416259LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = 4157984365U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
