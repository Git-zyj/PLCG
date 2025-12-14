#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3975839144U;
long long int var_3 = 4562174651690900170LL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-109;
unsigned short var_7 = (unsigned short)3837;
unsigned short var_11 = (unsigned short)65361;
int zero = 0;
unsigned char var_12 = (unsigned char)142;
unsigned short var_13 = (unsigned short)17461;
signed char var_14 = (signed char)25;
long long int var_15 = 4154093571198473641LL;
unsigned int var_16 = 1992623027U;
unsigned long long int arr_0 [23] ;
short arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 10868655393374929446ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)4674 : (short)13698;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53755 : (unsigned short)64657;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
