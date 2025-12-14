#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1637917561;
unsigned short var_2 = (unsigned short)16546;
unsigned short var_3 = (unsigned short)23129;
unsigned char var_4 = (unsigned char)98;
signed char var_5 = (signed char)-1;
short var_8 = (short)-31860;
short var_11 = (short)9029;
int zero = 0;
short var_12 = (short)-2256;
long long int var_13 = -33405051916224129LL;
unsigned char var_14 = (unsigned char)39;
signed char var_15 = (signed char)124;
long long int var_16 = 5994644101506310187LL;
unsigned short var_17 = (unsigned short)27590;
int var_18 = -479190409;
long long int var_19 = -9124029334782228011LL;
unsigned int var_20 = 1618993730U;
long long int arr_0 [16] ;
int arr_1 [16] ;
long long int arr_3 [16] ;
int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 7621684886863401136LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2098990554 : -1738360391;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2326174600650078272LL : -1974185161000763582LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -1020572787 : -1301207488;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
