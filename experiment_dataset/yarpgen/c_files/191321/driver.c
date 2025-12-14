#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned int var_1 = 3462026217U;
unsigned char var_3 = (unsigned char)225;
unsigned long long int var_9 = 4781533966608903105ULL;
unsigned int var_10 = 673048474U;
unsigned long long int var_11 = 15654641736343367856ULL;
int zero = 0;
unsigned long long int var_12 = 4453982378355270090ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)123;
unsigned short var_15 = (unsigned short)57264;
_Bool var_16 = (_Bool)1;
int var_17 = -820263075;
unsigned long long int var_18 = 80618663600700762ULL;
unsigned long long int arr_1 [15] [15] ;
signed char arr_5 [15] [15] ;
signed char arr_2 [15] ;
unsigned long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 16306452245056656588ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 14022706124746957693ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
