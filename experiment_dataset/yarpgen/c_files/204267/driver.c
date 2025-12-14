#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-91;
unsigned long long int var_6 = 3526667765614228719ULL;
short var_7 = (short)658;
unsigned long long int var_8 = 3279324200060106230ULL;
unsigned char var_13 = (unsigned char)62;
signed char var_14 = (signed char)70;
short var_17 = (short)-17332;
int zero = 0;
unsigned short var_20 = (unsigned short)41350;
unsigned short var_21 = (unsigned short)10364;
short var_22 = (short)12885;
unsigned short var_23 = (unsigned short)61582;
unsigned short arr_0 [25] ;
unsigned long long int arr_1 [25] ;
signed char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)5900;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 17451213460123114105ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)(-127 - 1);
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
