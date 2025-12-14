#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8673314749255252034ULL;
unsigned short var_7 = (unsigned short)50580;
unsigned short var_9 = (unsigned short)23616;
unsigned long long int var_11 = 6969969176832066940ULL;
unsigned int var_12 = 4021320139U;
int zero = 0;
unsigned long long int var_14 = 1894723993897236874ULL;
unsigned char var_15 = (unsigned char)214;
unsigned char var_16 = (unsigned char)40;
long long int var_17 = 8926897635138759945LL;
unsigned char var_18 = (unsigned char)46;
unsigned short var_19 = (unsigned short)21864;
signed char var_20 = (signed char)-63;
int arr_0 [10] ;
unsigned char arr_1 [10] ;
unsigned char arr_2 [10] [10] ;
unsigned char arr_3 [10] [10] ;
unsigned long long int arr_4 [10] [10] ;
unsigned long long int arr_6 [10] [10] [10] ;
unsigned long long int arr_7 [10] [10] ;
unsigned short arr_8 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 258047244;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 163722620078201327ULL : 3009602241792195379ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 17172976910149018866ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 11133380313266074015ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)17150;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
