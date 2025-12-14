#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1176982138;
unsigned short var_1 = (unsigned short)22020;
long long int var_2 = -8511013090517478061LL;
unsigned char var_3 = (unsigned char)123;
unsigned short var_7 = (unsigned short)13619;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_11 = -4326845445581337654LL;
unsigned char var_12 = (unsigned char)91;
long long int var_13 = 5098442127488853520LL;
unsigned long long int arr_1 [19] ;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 12091839008688364320ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)53961;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
