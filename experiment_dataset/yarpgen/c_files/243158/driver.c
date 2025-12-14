#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2026053796802198796LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 13480998878740145970ULL;
short var_7 = (short)24068;
signed char var_8 = (signed char)-82;
signed char var_10 = (signed char)116;
signed char var_11 = (signed char)29;
int var_12 = 1215174645;
unsigned long long int var_14 = 17058677238209086482ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 1785065936;
unsigned long long int var_19 = 16564062613264882078ULL;
unsigned long long int var_20 = 152570868598406218ULL;
signed char arr_1 [17] ;
unsigned char arr_2 [17] ;
_Bool arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
