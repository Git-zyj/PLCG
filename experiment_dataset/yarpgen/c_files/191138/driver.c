#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 14896526095191555127ULL;
_Bool var_11 = (_Bool)1;
signed char var_17 = (signed char)109;
unsigned long long int var_18 = 5851859670687428070ULL;
int zero = 0;
long long int var_19 = 718656416318879516LL;
unsigned int var_20 = 1383087476U;
signed char var_21 = (signed char)95;
signed char var_22 = (signed char)76;
unsigned int var_23 = 4170945071U;
int arr_0 [24] ;
_Bool arr_4 [21] ;
unsigned long long int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1084879321;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 14433796128570396213ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
