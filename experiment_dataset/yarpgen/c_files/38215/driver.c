#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1637969284694736494LL;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)63925;
unsigned long long int var_14 = 13260916465677784908ULL;
unsigned long long int var_15 = 7608919220653192149ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)58411;
long long int var_20 = -6246321704692201370LL;
_Bool var_21 = (_Bool)1;
unsigned int arr_0 [22] ;
_Bool arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 508552321U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
