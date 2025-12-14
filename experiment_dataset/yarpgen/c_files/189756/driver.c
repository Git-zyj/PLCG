#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5469251364395482532ULL;
unsigned long long int var_3 = 8724461671620613017ULL;
unsigned long long int var_6 = 4937503618704439950ULL;
unsigned long long int var_7 = 2246281073902430770ULL;
unsigned long long int var_10 = 11972911443384473662ULL;
unsigned long long int var_11 = 2045483494919877689ULL;
int zero = 0;
unsigned long long int var_12 = 14322377977421784056ULL;
unsigned long long int var_13 = 3165108498188154935ULL;
unsigned long long int var_14 = 16331750125514010776ULL;
unsigned long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9913075885217853841ULL : 17326173385659279386ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
