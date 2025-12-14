#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6304863167185777055ULL;
unsigned char var_1 = (unsigned char)66;
signed char var_2 = (signed char)-87;
unsigned int var_3 = 1298336441U;
long long int var_4 = 7013527156969847465LL;
unsigned int var_5 = 3347697122U;
int var_6 = 174613684;
int zero = 0;
unsigned long long int var_13 = 9201740564372633135ULL;
unsigned char var_14 = (unsigned char)250;
signed char var_15 = (signed char)90;
signed char var_16 = (signed char)-33;
short arr_0 [15] ;
long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)13939 : (short)-9756;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -6243915149683431965LL : 6457873964014115790LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
