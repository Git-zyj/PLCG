#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-35;
long long int var_9 = -5255543205859804042LL;
signed char var_11 = (signed char)-63;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)154;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)33;
unsigned short var_19 = (unsigned short)13632;
unsigned short var_20 = (unsigned short)19992;
long long int arr_2 [25] ;
long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 654507940245446467LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -6151976205302123718LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
