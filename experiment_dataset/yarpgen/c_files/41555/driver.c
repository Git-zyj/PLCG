#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -113403995;
unsigned long long int var_10 = 6804615672799122177ULL;
long long int var_13 = -4412757664100267904LL;
long long int var_14 = 5290335592329866525LL;
int zero = 0;
short var_19 = (short)17015;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-15832;
unsigned short var_22 = (unsigned short)17669;
unsigned char var_23 = (unsigned char)237;
int var_24 = -523254686;
unsigned char var_25 = (unsigned char)96;
signed char arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned int arr_3 [19] ;
long long int arr_4 [19] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-76 : (signed char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 11913132679066715179ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1556019699U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 6389660138307597695LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 661647258;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
