#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
unsigned int var_1 = 584860266U;
unsigned char var_3 = (unsigned char)50;
unsigned short var_8 = (unsigned short)27441;
unsigned short var_13 = (unsigned short)29926;
unsigned char var_15 = (unsigned char)139;
long long int var_16 = -2527832053115761526LL;
int zero = 0;
unsigned char var_17 = (unsigned char)151;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 5139364426973189267ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
short arr_1 [11] ;
unsigned long long int arr_7 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)22383 : (short)5040;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4601109179176362082ULL : 6826695554785486792ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
