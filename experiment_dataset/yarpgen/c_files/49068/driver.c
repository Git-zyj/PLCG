#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4632019936374237701LL;
unsigned long long int var_2 = 6900349141106758244ULL;
short var_8 = (short)32101;
int zero = 0;
short var_12 = (short)-3969;
unsigned int var_13 = 2705713333U;
unsigned short var_14 = (unsigned short)7021;
int var_15 = 1326386682;
unsigned int var_16 = 4206855920U;
short var_17 = (short)-19073;
long long int arr_0 [21] [21] ;
unsigned char arr_1 [21] ;
unsigned long long int arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -1509657685202439193LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 602001315131346098ULL : 1925694746795893330ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
