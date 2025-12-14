#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 30493091;
long long int var_5 = 8862533342787921037LL;
unsigned long long int var_11 = 2512749588352196072ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)27070;
unsigned short var_17 = (unsigned short)35798;
signed char var_18 = (signed char)-9;
signed char var_19 = (signed char)-114;
signed char arr_0 [11] ;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1637463578;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
