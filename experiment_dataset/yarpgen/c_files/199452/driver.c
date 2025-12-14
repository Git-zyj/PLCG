#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1182551262;
unsigned char var_5 = (unsigned char)102;
unsigned long long int var_8 = 14518821756244355893ULL;
int var_16 = -569160533;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1917748599071387123ULL;
unsigned long long int var_20 = 6879666815864349138ULL;
short var_21 = (short)31625;
long long int var_22 = 8095674230159851779LL;
signed char arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
unsigned char arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)53 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)81 : (unsigned char)238;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
