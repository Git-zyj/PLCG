#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3950081291U;
int var_2 = 1005948711;
signed char var_5 = (signed char)-9;
unsigned short var_7 = (unsigned short)43381;
signed char var_8 = (signed char)95;
unsigned int var_9 = 1731701411U;
short var_10 = (short)-25445;
unsigned int var_11 = 2619635979U;
signed char var_13 = (signed char)38;
int zero = 0;
signed char var_15 = (signed char)-69;
short var_16 = (short)7886;
unsigned int var_17 = 3583871092U;
unsigned short var_18 = (unsigned short)35919;
int var_19 = -762618000;
long long int var_20 = -3728950225405321392LL;
signed char var_21 = (signed char)68;
long long int arr_1 [10] ;
_Bool arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -6425045519031977544LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
