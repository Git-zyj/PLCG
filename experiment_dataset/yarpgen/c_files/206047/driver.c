#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27091;
unsigned long long int var_7 = 5179368055218644865ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_14 = 1291799499U;
int zero = 0;
unsigned char var_16 = (unsigned char)103;
unsigned short var_17 = (unsigned short)23867;
unsigned char var_18 = (unsigned char)66;
unsigned short var_19 = (unsigned short)29750;
unsigned int var_20 = 3145362006U;
long long int arr_14 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 1896842166754460965LL : -5642569043421801916LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
