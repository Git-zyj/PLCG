#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned char var_2 = (unsigned char)155;
long long int var_3 = 7668977560765334372LL;
int var_4 = 2106337985;
unsigned short var_6 = (unsigned short)1146;
unsigned char var_7 = (unsigned char)134;
long long int var_8 = 9086707609470503404LL;
unsigned long long int var_10 = 462604215991880258ULL;
unsigned long long int var_11 = 3994001969177669169ULL;
long long int var_12 = -2403013537529206457LL;
long long int var_13 = -146854158708773290LL;
unsigned int var_14 = 4096182944U;
signed char var_15 = (signed char)35;
long long int var_16 = -109222511171316898LL;
int zero = 0;
signed char var_17 = (signed char)-90;
int var_18 = 724010086;
long long int var_19 = 6541226636179997719LL;
long long int var_20 = 6054391538332360416LL;
unsigned short var_21 = (unsigned short)65008;
int var_22 = 1804648763;
unsigned char arr_2 [22] ;
signed char arr_6 [22] ;
int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 1133893719;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
