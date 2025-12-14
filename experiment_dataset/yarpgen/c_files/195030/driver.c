#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18273171824266558580ULL;
unsigned long long int var_3 = 2707303791016358840ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 15262571210259229208ULL;
unsigned int var_7 = 3595064937U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 9588104855737211394ULL;
int zero = 0;
unsigned long long int var_10 = 13957058977578573235ULL;
short var_11 = (short)997;
unsigned int var_12 = 1950341667U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)167;
long long int arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
short arr_4 [17] ;
unsigned long long int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -3682693609742165168LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)23321;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)16955 : (short)4019;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 7776928365937102870ULL : 10970308602270061108ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
