#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17033;
unsigned short var_4 = (unsigned short)40688;
short var_5 = (short)6834;
unsigned int var_10 = 705198537U;
unsigned int var_11 = 2804151980U;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)-89;
int zero = 0;
int var_18 = -840359772;
unsigned int var_19 = 1937775442U;
signed char var_20 = (signed char)116;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_0 [14] ;
short arr_1 [14] [14] ;
unsigned char arr_2 [14] [14] ;
long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 6915211486220622186ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)19489;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7954631051377397637LL : -8542334321517482792LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
