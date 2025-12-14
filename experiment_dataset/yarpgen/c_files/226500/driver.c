#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)118;
unsigned short var_3 = (unsigned short)64856;
signed char var_4 = (signed char)88;
unsigned short var_5 = (unsigned short)14569;
unsigned long long int var_6 = 735420977747131525ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 6509140482906010875ULL;
int zero = 0;
int var_14 = -1864658126;
unsigned char var_15 = (unsigned char)167;
short var_16 = (short)9897;
signed char var_17 = (signed char)13;
unsigned long long int arr_0 [25] [25] ;
unsigned long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 6469614814300233868ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 10198617514468345132ULL;
}

void checksum() {
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
