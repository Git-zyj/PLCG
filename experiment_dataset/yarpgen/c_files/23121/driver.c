#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2870083008462328332ULL;
unsigned short var_1 = (unsigned short)49429;
unsigned int var_3 = 2240963345U;
long long int var_9 = 6460848987635929760LL;
unsigned long long int var_10 = 2691032639475508765ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)142;
unsigned char var_12 = (unsigned char)140;
long long int var_13 = 4491531171843656322LL;
unsigned int var_14 = 3441618386U;
unsigned char arr_2 [19] ;
long long int arr_7 [15] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = -5193378040209948955LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 624412608230278531ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
