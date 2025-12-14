#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 204841411;
unsigned int var_1 = 3998532874U;
short var_3 = (short)7577;
signed char var_4 = (signed char)-122;
signed char var_5 = (signed char)125;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)3825;
signed char var_16 = (signed char)-77;
unsigned short var_17 = (unsigned short)58803;
long long int var_18 = -6466115869594966415LL;
_Bool arr_3 [17] [17] [17] ;
short arr_4 [17] ;
unsigned short arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-11967;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15866 : (unsigned short)34823;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
