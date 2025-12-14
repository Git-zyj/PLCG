#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29338;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-122;
unsigned char var_3 = (unsigned char)128;
int var_5 = -121180091;
long long int var_6 = 6481429336152221391LL;
unsigned long long int var_7 = 10460291409510819622ULL;
long long int var_8 = 4514808987188166129LL;
int var_9 = -1564914242;
unsigned char var_10 = (unsigned char)102;
unsigned long long int var_11 = 8332739625152167306ULL;
int zero = 0;
unsigned long long int var_12 = 9326335386810439255ULL;
unsigned short var_13 = (unsigned short)7154;
long long int var_14 = -748661833067011015LL;
unsigned char var_15 = (unsigned char)34;
int var_16 = 1701550309;
unsigned char var_17 = (unsigned char)52;
int arr_1 [13] ;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2085631860;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)100;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
