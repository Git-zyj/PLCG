#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16003996496524162830ULL;
long long int var_2 = 2869089781721435378LL;
unsigned char var_4 = (unsigned char)162;
long long int var_7 = -2445099484838407469LL;
unsigned short var_9 = (unsigned short)59078;
unsigned long long int var_10 = 16952432089029284576ULL;
unsigned long long int var_12 = 13776692525244922801ULL;
unsigned char var_13 = (unsigned char)250;
unsigned short var_14 = (unsigned short)16694;
unsigned short var_17 = (unsigned short)21371;
int zero = 0;
unsigned long long int var_18 = 1525679343379946077ULL;
unsigned long long int var_19 = 18006445110824241763ULL;
unsigned char var_20 = (unsigned char)98;
unsigned long long int var_21 = 8463964945105440205ULL;
long long int var_22 = -7257290374168762753LL;
unsigned char var_23 = (unsigned char)201;
unsigned char var_24 = (unsigned char)222;
unsigned long long int var_25 = 7488108697338392924ULL;
long long int var_26 = 1174319628752769991LL;
unsigned char var_27 = (unsigned char)180;
long long int var_28 = 9138724252499403438LL;
unsigned long long int var_29 = 860386322133506638ULL;
unsigned char arr_1 [19] [19] ;
unsigned short arr_5 [19] [19] [19] ;
unsigned short arr_8 [19] [19] [19] ;
unsigned char arr_11 [25] ;
unsigned long long int arr_12 [25] ;
unsigned long long int arr_13 [25] ;
unsigned long long int arr_4 [19] [19] ;
unsigned long long int arr_10 [19] [19] [19] ;
unsigned short arr_14 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)18649;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)3613;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 2974313099333539540ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 9218247711769821988ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 5779446169294280685ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 15179607349933102555ULL : 16796598389263114016ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)21637;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
