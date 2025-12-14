#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26458;
short var_3 = (short)15694;
unsigned long long int var_5 = 18321869675046983204ULL;
signed char var_7 = (signed char)117;
signed char var_8 = (signed char)-17;
long long int var_9 = 636288544914068930LL;
int var_11 = -1974380436;
int zero = 0;
long long int var_19 = -4726260645814272622LL;
unsigned long long int var_20 = 12652771178947060083ULL;
long long int var_21 = -3392040737582122141LL;
unsigned char var_22 = (unsigned char)51;
signed char arr_0 [15] ;
unsigned long long int arr_1 [15] ;
signed char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2994665020126554769ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)37 : (signed char)-76;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
