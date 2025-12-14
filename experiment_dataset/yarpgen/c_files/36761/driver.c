#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
short var_2 = (short)30460;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 5603717517258256134ULL;
unsigned char var_9 = (unsigned char)80;
unsigned int var_13 = 60218691U;
signed char var_15 = (signed char)-82;
int zero = 0;
long long int var_18 = 6234058576946840044LL;
unsigned long long int var_19 = 8575552201807291811ULL;
unsigned char var_20 = (unsigned char)101;
unsigned int var_21 = 1391702535U;
unsigned long long int arr_0 [15] ;
signed char arr_1 [15] ;
unsigned long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3001529822466536465ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 236628851030616868ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
