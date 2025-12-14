#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-25559;
long long int var_12 = -6029781236508176741LL;
unsigned char var_14 = (unsigned char)232;
unsigned long long int var_15 = 10224292936507598538ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)23039;
long long int var_18 = 3346287589827834277LL;
unsigned short var_19 = (unsigned short)20779;
long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -5065133725516209103LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 9596853062049928460ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5527396605124789552LL : -6576078144146521343LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
