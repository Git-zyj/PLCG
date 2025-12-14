#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2528;
signed char var_1 = (signed char)-29;
long long int var_2 = 1993337969431316246LL;
unsigned char var_3 = (unsigned char)235;
signed char var_4 = (signed char)-90;
short var_5 = (short)-20251;
signed char var_7 = (signed char)126;
signed char var_9 = (signed char)-101;
unsigned char var_10 = (unsigned char)150;
long long int var_11 = -397225374275598638LL;
long long int var_12 = -2521812503889575623LL;
long long int var_13 = 3391802824972384709LL;
signed char var_14 = (signed char)-61;
int zero = 0;
short var_15 = (short)-2004;
signed char var_16 = (signed char)52;
short var_17 = (short)-27489;
signed char var_18 = (signed char)114;
short var_19 = (short)18297;
unsigned char var_20 = (unsigned char)17;
long long int var_21 = 1285671754229379894LL;
signed char var_22 = (signed char)-104;
signed char var_23 = (signed char)-4;
long long int var_24 = 8653009460509564819LL;
signed char var_25 = (signed char)3;
signed char arr_0 [10] ;
unsigned char arr_1 [10] [10] ;
signed char arr_2 [10] ;
long long int arr_6 [10] ;
short arr_7 [10] [10] ;
signed char arr_8 [10] [10] ;
signed char arr_11 [10] [10] ;
short arr_12 [10] [10] [10] ;
long long int arr_13 [10] ;
long long int arr_15 [10] [10] ;
signed char arr_17 [10] [10] ;
long long int arr_19 [10] [10] [10] [10] ;
short arr_20 [10] [10] [10] [10] ;
signed char arr_22 [10] ;
short arr_23 [10] ;
long long int arr_24 [10] ;
short arr_28 [10] [10] ;
signed char arr_37 [12] ;
signed char arr_38 [12] ;
signed char arr_39 [12] ;
signed char arr_4 [10] ;
short arr_5 [10] ;
short arr_9 [10] ;
long long int arr_10 [10] [10] ;
unsigned char arr_21 [10] [10] [10] ;
long long int arr_29 [10] ;
long long int arr_36 [10] [10] [10] ;
unsigned char arr_40 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -3486525061014714356LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-20459;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-28937 : (short)-6720;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -5036868527502876819LL : -7572683680916481186LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = 6319099196449992671LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 439264018277584540LL : -4868510398352240404LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)15935 : (short)-24469;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (short)29245;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = -734538792447698159LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)25761 : (short)-20199;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_37 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_38 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_39 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)455;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)23584;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = -158638298113872918LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)193 : (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -2599890761256767176LL : -8662173560943871984LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4129017910783000586LL : 2492184101942342424LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_40 [i_0] = (unsigned char)166;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
