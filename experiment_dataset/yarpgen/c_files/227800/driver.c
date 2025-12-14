#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)49;
signed char var_5 = (signed char)-16;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)47;
unsigned long long int var_12 = 14753034798321953755ULL;
unsigned long long int var_13 = 24414579814188344ULL;
unsigned long long int var_14 = 11086695217854400215ULL;
long long int var_15 = 6606233825244211909LL;
signed char arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 11423521353807880183ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
