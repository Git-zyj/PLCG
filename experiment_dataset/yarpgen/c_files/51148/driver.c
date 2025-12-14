#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5601382681959559940ULL;
unsigned long long int var_1 = 14437836735201474378ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 2133490487U;
unsigned long long int var_10 = 3370654309462162208ULL;
int zero = 0;
short var_12 = (short)-2388;
signed char var_13 = (signed char)71;
unsigned long long int var_14 = 1116405985205543177ULL;
unsigned short var_15 = (unsigned short)57973;
signed char var_16 = (signed char)-112;
signed char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-76;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
