#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46046;
long long int var_3 = 1999242512151313597LL;
_Bool var_5 = (_Bool)0;
int var_15 = 454670313;
unsigned char var_17 = (unsigned char)225;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)116;
long long int var_20 = -6633449739845086516LL;
signed char var_21 = (signed char)-5;
int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -2085261211;
}

void checksum() {
    hash(&seed, var_18);
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
