#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned short var_1 = (unsigned short)38314;
signed char var_2 = (signed char)81;
unsigned short var_4 = (unsigned short)32258;
int var_5 = 1918184705;
int var_7 = 482047843;
unsigned char var_8 = (unsigned char)157;
short var_9 = (short)-20550;
int zero = 0;
signed char var_10 = (signed char)46;
short var_11 = (short)16813;
unsigned long long int var_12 = 8339660024193114608ULL;
int var_13 = -1002544517;
int arr_0 [12] ;
_Bool arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1522704484;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
