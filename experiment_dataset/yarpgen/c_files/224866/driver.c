#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)112;
int var_9 = 1013186303;
signed char var_14 = (signed char)-73;
long long int var_16 = -7577901951092503702LL;
int zero = 0;
unsigned short var_19 = (unsigned short)21868;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8529987264181202296LL;
int var_22 = -1468650199;
int arr_1 [16] ;
signed char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -685709489;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)57;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
