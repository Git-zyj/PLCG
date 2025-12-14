#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
unsigned long long int var_2 = 11461429037725455271ULL;
unsigned long long int var_4 = 1643313058776158843ULL;
unsigned char var_6 = (unsigned char)48;
signed char var_8 = (signed char)40;
unsigned int var_9 = 98811287U;
signed char var_10 = (signed char)-54;
unsigned char var_12 = (unsigned char)76;
signed char var_13 = (signed char)97;
unsigned long long int var_14 = 9778709450814688592ULL;
int zero = 0;
long long int var_17 = 1520644274663192900LL;
signed char var_18 = (signed char)-60;
long long int var_19 = -5050281897485586485LL;
long long int var_20 = 5857467926209581997LL;
signed char var_21 = (signed char)49;
unsigned long long int arr_0 [23] ;
long long int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
signed char arr_4 [23] ;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 12690318432850813177ULL : 9179863870674917769ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1801616481125218543LL : 5160487810894391693LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 18186512718074841073ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 14680879591065845038ULL : 5485230746424742154ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)44 : (signed char)119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 17947119422531838347ULL : 4237905463965386295ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
