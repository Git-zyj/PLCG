#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7549161591771682524LL;
unsigned int var_2 = 2191220290U;
unsigned short var_3 = (unsigned short)65491;
long long int var_10 = -314796868025489459LL;
signed char var_12 = (signed char)-9;
short var_15 = (short)-32516;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)222;
unsigned short var_19 = (unsigned short)64071;
int var_20 = -70387231;
unsigned long long int var_21 = 13506337000312700208ULL;
unsigned long long int arr_0 [22] ;
int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 10977044004055166428ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1872955299;
}

void checksum() {
    hash(&seed, var_17);
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
