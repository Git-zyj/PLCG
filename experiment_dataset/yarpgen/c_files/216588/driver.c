#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5841364444441230135LL;
unsigned long long int var_1 = 15320852945370526188ULL;
unsigned short var_4 = (unsigned short)37509;
unsigned short var_5 = (unsigned short)37875;
unsigned int var_6 = 2665189330U;
unsigned long long int var_7 = 14347790399582985812ULL;
int zero = 0;
long long int var_10 = -1854602419659015681LL;
unsigned int var_11 = 1624943184U;
unsigned long long int var_12 = 18268352879731498668ULL;
long long int var_13 = 3896858679353846876LL;
short var_14 = (short)28246;
unsigned long long int var_15 = 12893088168999688591ULL;
unsigned short arr_0 [21] ;
short arr_1 [21] ;
short arr_2 [21] ;
unsigned short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)29099;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-12591;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)20480;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)44037;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
