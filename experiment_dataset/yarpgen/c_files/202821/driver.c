#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 8742845803521525334LL;
unsigned char var_4 = (unsigned char)118;
unsigned int var_5 = 1059640595U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 13030330006281745230ULL;
short var_10 = (short)11246;
signed char var_11 = (signed char)-30;
int var_13 = 343994181;
int zero = 0;
long long int var_15 = -3059875881712890738LL;
long long int var_16 = 7591864352063946926LL;
signed char var_17 = (signed char)34;
long long int var_18 = -8435397401815073521LL;
long long int var_19 = -693073859476323109LL;
unsigned short arr_0 [24] ;
unsigned char arr_2 [24] ;
unsigned long long int arr_3 [24] ;
long long int arr_4 [24] ;
_Bool arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)27945;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 792341779776143947ULL : 8426134131337710211ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2938729661447619032LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
