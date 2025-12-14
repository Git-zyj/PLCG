#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6413346088131082184LL;
int var_2 = 424770091;
long long int var_3 = -732579592774684524LL;
unsigned short var_4 = (unsigned short)42909;
long long int var_6 = -5192768521633646550LL;
unsigned short var_7 = (unsigned short)54308;
long long int var_9 = -181275150660770523LL;
int zero = 0;
signed char var_10 = (signed char)-55;
int var_11 = -1681419119;
unsigned short arr_3 [22] ;
unsigned long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)55991;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 17807093803972218340ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
