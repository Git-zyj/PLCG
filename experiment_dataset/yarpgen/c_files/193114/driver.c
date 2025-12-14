#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)191;
long long int var_2 = -8635033994605203388LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)20399;
int var_7 = -1955520568;
unsigned char var_8 = (unsigned char)26;
unsigned char var_12 = (unsigned char)113;
signed char var_13 = (signed char)-96;
unsigned char var_14 = (unsigned char)235;
int zero = 0;
unsigned short var_15 = (unsigned short)15717;
unsigned long long int var_16 = 5760787024871869294ULL;
int var_17 = 1645371488;
int var_18 = -1375817539;
unsigned char var_19 = (unsigned char)137;
unsigned char var_20 = (unsigned char)7;
unsigned short var_21 = (unsigned short)25165;
unsigned char var_22 = (unsigned char)2;
unsigned short var_23 = (unsigned short)27091;
int var_24 = 1553160709;
short arr_0 [17] [17] ;
_Bool arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned int arr_3 [13] ;
unsigned short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-22036;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2261560606U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)58288;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
