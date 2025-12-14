#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3384988469762141042ULL;
int var_2 = -229870084;
signed char var_4 = (signed char)-18;
unsigned char var_12 = (unsigned char)166;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9565386503197066716ULL;
int var_15 = -1113386013;
unsigned int var_16 = 1258301108U;
int zero = 0;
unsigned int var_17 = 1671593612U;
unsigned short var_18 = (unsigned short)31229;
long long int var_19 = -43088339942327654LL;
unsigned long long int var_20 = 5374539185472299162ULL;
int var_21 = 469206503;
unsigned short arr_5 [17] [17] ;
int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)40923 : (unsigned short)61771;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -944138557 : -1120627698;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
