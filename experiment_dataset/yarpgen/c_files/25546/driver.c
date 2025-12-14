#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)245;
unsigned short var_4 = (unsigned short)42108;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)147;
unsigned long long int var_13 = 4843652937202287503ULL;
int zero = 0;
unsigned long long int var_17 = 1923312574904371987ULL;
signed char var_18 = (signed char)-35;
unsigned long long int var_19 = 10199553735163938654ULL;
unsigned long long int var_20 = 6067192442162770411ULL;
unsigned char arr_1 [23] ;
unsigned long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 7402968142381882028ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
