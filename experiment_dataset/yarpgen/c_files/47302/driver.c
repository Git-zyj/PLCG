#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5791753116033888313LL;
unsigned short var_6 = (unsigned short)28411;
unsigned int var_8 = 966925378U;
unsigned int var_10 = 2434050983U;
int zero = 0;
unsigned char var_17 = (unsigned char)211;
short var_18 = (short)27453;
unsigned long long int var_19 = 17405429636540163664ULL;
signed char var_20 = (signed char)86;
unsigned char arr_0 [14] ;
unsigned int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3731319808U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
