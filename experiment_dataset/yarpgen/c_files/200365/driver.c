#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
unsigned long long int var_1 = 2484855492282055848ULL;
short var_6 = (short)-28404;
unsigned long long int var_8 = 16944961170449873847ULL;
short var_11 = (short)-23955;
signed char var_13 = (signed char)-105;
int zero = 0;
long long int var_16 = -2274236308084532019LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)130;
unsigned char var_19 = (unsigned char)9;
unsigned short arr_1 [13] ;
short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)12267;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-10127 : (short)21202;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
