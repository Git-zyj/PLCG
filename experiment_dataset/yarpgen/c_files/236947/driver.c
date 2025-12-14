#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7236688706074160931LL;
unsigned short var_2 = (unsigned short)28842;
unsigned long long int var_4 = 11203898310542142702ULL;
short var_5 = (short)11322;
unsigned int var_6 = 3604988354U;
unsigned int var_8 = 1717788943U;
unsigned int var_12 = 4141599197U;
int zero = 0;
long long int var_15 = -8010668604920914722LL;
long long int var_16 = -5027775000593764927LL;
long long int var_17 = 5400982022307582444LL;
unsigned int var_18 = 3637780702U;
unsigned int var_19 = 482155315U;
long long int var_20 = -1712623521959541880LL;
unsigned int var_21 = 46287445U;
unsigned long long int arr_1 [14] [14] ;
long long int arr_3 [14] [14] ;
long long int arr_5 [14] [14] [14] ;
unsigned char arr_6 [14] [14] [14] [14] ;
unsigned short arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 5569183457583544330ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 5863790443655923719LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1869837400737340738LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)31737;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
