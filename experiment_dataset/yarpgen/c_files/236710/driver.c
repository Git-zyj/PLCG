#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2554679461U;
unsigned long long int var_5 = 6440041777686671204ULL;
long long int var_6 = 7054908369238679922LL;
unsigned short var_7 = (unsigned short)23012;
long long int var_8 = -5873085511417109341LL;
int zero = 0;
unsigned long long int var_14 = 10330076951845806109ULL;
unsigned long long int var_15 = 5198504794770086536ULL;
unsigned char var_16 = (unsigned char)34;
_Bool var_17 = (_Bool)0;
signed char arr_0 [24] ;
short arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)19740;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 12433618228819729345ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 12314830926643821849ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
