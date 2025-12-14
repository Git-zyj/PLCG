#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2289287923788047007LL;
int var_1 = -1103048047;
unsigned short var_2 = (unsigned short)56865;
unsigned short var_3 = (unsigned short)35253;
long long int var_5 = 2307304966763040225LL;
unsigned char var_6 = (unsigned char)177;
long long int var_8 = 4612988931249264749LL;
unsigned long long int var_9 = 3663510763751269554ULL;
unsigned char var_11 = (unsigned char)191;
int zero = 0;
signed char var_12 = (signed char)-102;
long long int var_13 = -3620807708151974911LL;
unsigned long long int var_14 = 10789758061362801206ULL;
int arr_0 [25] ;
signed char arr_1 [25] ;
unsigned char arr_4 [25] ;
unsigned long long int arr_5 [25] [25] ;
unsigned short arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2053075397;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 14077215430194901006ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)26473;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
