#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
long long int var_2 = 3362847039448411929LL;
unsigned long long int var_5 = 15511614717956504439ULL;
signed char var_7 = (signed char)-93;
signed char var_8 = (signed char)-70;
unsigned long long int var_10 = 17698290448736816939ULL;
unsigned int var_11 = 3148617963U;
int var_13 = -2068510170;
long long int var_16 = 4523462608250940704LL;
int zero = 0;
unsigned long long int var_19 = 2096380027864454041ULL;
unsigned long long int var_20 = 4733224348854445122ULL;
signed char var_21 = (signed char)-40;
short var_22 = (short)-8501;
_Bool var_23 = (_Bool)0;
int var_24 = 1170610514;
unsigned int var_25 = 2464967997U;
long long int var_26 = -1993609063786824878LL;
signed char arr_1 [25] [25] ;
long long int arr_2 [25] [25] ;
_Bool arr_3 [25] [25] [25] ;
long long int arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 5119635900438927785LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -2202619665028173497LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
