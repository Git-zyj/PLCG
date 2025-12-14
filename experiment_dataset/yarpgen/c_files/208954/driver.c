#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
unsigned int var_2 = 3644734234U;
unsigned int var_4 = 968813864U;
long long int var_6 = 8692631932293284425LL;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)57;
unsigned short var_15 = (unsigned short)25698;
int zero = 0;
signed char var_17 = (signed char)-53;
int var_18 = -136718433;
unsigned long long int var_19 = 12814595582416572890ULL;
signed char var_20 = (signed char)3;
_Bool arr_1 [25] [25] ;
unsigned long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 297314110773006744ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
