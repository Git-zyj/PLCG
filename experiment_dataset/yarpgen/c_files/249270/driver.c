#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14662788736954740178ULL;
unsigned long long int var_2 = 9680007662841480498ULL;
long long int var_4 = -4350211867300127958LL;
int var_6 = -2091655221;
_Bool var_8 = (_Bool)1;
int var_9 = -1428386023;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 8694784767493179665ULL;
int zero = 0;
unsigned int var_16 = 3179193002U;
unsigned long long int var_17 = 8914707701343533069ULL;
short var_18 = (short)-25859;
unsigned char var_19 = (unsigned char)251;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 46894497094231708ULL;
unsigned long long int var_22 = 8332165870508566662ULL;
unsigned long long int var_23 = 4311128575770967376ULL;
signed char arr_0 [14] [14] ;
_Bool arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
