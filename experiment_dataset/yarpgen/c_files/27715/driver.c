#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_5 = 1567219169;
unsigned char var_6 = (unsigned char)174;
unsigned char var_8 = (unsigned char)133;
unsigned char var_9 = (unsigned char)182;
signed char var_10 = (signed char)-75;
int zero = 0;
unsigned char var_11 = (unsigned char)205;
signed char var_12 = (signed char)-66;
_Bool var_13 = (_Bool)1;
long long int arr_1 [17] ;
signed char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 6547789418310498440LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)54;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
