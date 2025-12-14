#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1428205459U;
unsigned long long int var_4 = 16108535848735008865ULL;
unsigned short var_9 = (unsigned short)42078;
unsigned long long int var_11 = 7458950183705550801ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)192;
unsigned short var_20 = (unsigned short)42809;
unsigned short var_21 = (unsigned short)18743;
unsigned long long int var_22 = 6910508786143392133ULL;
unsigned short arr_0 [21] ;
unsigned long long int arr_3 [21] ;
unsigned char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)44965;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 12075999956704632504ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)128 : (unsigned char)250;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
