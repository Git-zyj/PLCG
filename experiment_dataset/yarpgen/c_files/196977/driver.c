#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2795185122819074139ULL;
unsigned long long int var_1 = 11070517144709195356ULL;
long long int var_8 = 3803620584150967948LL;
unsigned int var_13 = 3875687539U;
long long int var_14 = 6235422942249313729LL;
unsigned short var_15 = (unsigned short)9931;
int zero = 0;
unsigned long long int var_19 = 14879930754180927414ULL;
unsigned int var_20 = 4168701947U;
signed char var_21 = (signed char)80;
unsigned int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2952542441U : 2148610458U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
