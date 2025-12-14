#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15525017145372848952ULL;
short var_5 = (short)10894;
unsigned long long int var_6 = 525204845839915836ULL;
unsigned int var_9 = 1636586914U;
signed char var_10 = (signed char)39;
unsigned char var_11 = (unsigned char)131;
int zero = 0;
unsigned short var_12 = (unsigned short)20817;
unsigned int var_13 = 572678014U;
unsigned long long int var_14 = 2338173765461566804ULL;
int var_15 = 1912678233;
unsigned int var_16 = 1367384576U;
long long int var_17 = 5847067978382831147LL;
unsigned int var_18 = 1111925660U;
unsigned int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1593765162U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 9133378050369011653ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 4206546572U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
