#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)7;
unsigned long long int var_4 = 12284764771335080005ULL;
long long int var_5 = -1279790081041075107LL;
unsigned long long int var_7 = 6609850058329737553ULL;
long long int var_10 = 5764935963204120116LL;
unsigned long long int var_11 = 16650935338563877175ULL;
unsigned long long int var_12 = 16253152666984618390ULL;
unsigned long long int var_14 = 450322817259742612ULL;
int zero = 0;
unsigned long long int var_15 = 17492225456174651931ULL;
unsigned char var_16 = (unsigned char)190;
long long int var_17 = 6032039064633872118LL;
unsigned char var_18 = (unsigned char)48;
unsigned short var_19 = (unsigned short)44433;
unsigned long long int arr_0 [22] ;
long long int arr_1 [22] [22] ;
unsigned char arr_4 [22] ;
unsigned char arr_6 [22] [22] ;
unsigned short arr_7 [22] ;
long long int arr_8 [22] ;
unsigned char arr_9 [22] [22] [22] ;
long long int arr_10 [22] [22] [22] [22] ;
unsigned long long int arr_13 [11] [11] ;
long long int arr_2 [22] [22] ;
unsigned long long int arr_3 [22] ;
unsigned char arr_11 [22] ;
long long int arr_14 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 15342936929122522122ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -5308091257504478101LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)56553;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 8640815569116798559LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -6198348221890155541LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = 15830804032092471158ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -7311286545813472583LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 16903791602390076184ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = 1339124399486099710LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
