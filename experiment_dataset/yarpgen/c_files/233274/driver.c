#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
long long int var_2 = -2012688962041559250LL;
int var_6 = -1040272940;
unsigned short var_7 = (unsigned short)38226;
unsigned short var_18 = (unsigned short)54077;
int zero = 0;
signed char var_20 = (signed char)-51;
short var_21 = (short)-17075;
_Bool var_22 = (_Bool)1;
short var_23 = (short)17212;
unsigned long long int var_24 = 11062798135282267739ULL;
_Bool var_25 = (_Bool)1;
signed char arr_2 [15] [15] [15] ;
short arr_4 [15] ;
unsigned long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-10016;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1260408097350880050ULL : 9771416341095948388ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
