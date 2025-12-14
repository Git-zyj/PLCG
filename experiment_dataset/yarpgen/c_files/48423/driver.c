#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
_Bool var_1 = (_Bool)1;
long long int var_2 = -3673384945498705314LL;
unsigned short var_3 = (unsigned short)48915;
unsigned long long int var_4 = 18263392111400746768ULL;
int var_5 = 793648866;
long long int var_6 = -6637716223994500318LL;
unsigned char var_7 = (unsigned char)57;
int var_8 = -1722089054;
long long int var_9 = -836770585917985071LL;
int zero = 0;
unsigned long long int var_10 = 11871958601550612978ULL;
_Bool var_11 = (_Bool)1;
int var_12 = -1491827687;
unsigned long long int var_13 = 5602313717913573358ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)27;
unsigned long long int var_16 = 8581561543122953141ULL;
unsigned long long int arr_0 [10] ;
unsigned int arr_3 [10] [10] ;
unsigned long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2836057792688973283ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1742565854U : 1425458905U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 5939544286230130022ULL : 12991806325161202870ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
