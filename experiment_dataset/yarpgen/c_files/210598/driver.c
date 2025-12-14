#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5748738770880117197LL;
long long int var_3 = 8564913772620367524LL;
signed char var_4 = (signed char)12;
long long int var_6 = 5191118807946958425LL;
unsigned long long int var_7 = 6096965301445701964ULL;
long long int var_10 = 394320393463493549LL;
int zero = 0;
unsigned long long int var_11 = 2800299253878574254ULL;
unsigned long long int var_12 = 8107105118000434250ULL;
int var_13 = 286050374;
unsigned long long int arr_0 [21] ;
int arr_1 [21] ;
unsigned long long int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 10317746731359402038ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1655728040;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 5064100866484229928ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
