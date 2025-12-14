#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1933773456U;
long long int var_2 = 6706463635355379604LL;
signed char var_4 = (signed char)57;
unsigned int var_12 = 607527307U;
unsigned short var_14 = (unsigned short)14716;
long long int var_16 = 3614635427781144311LL;
int zero = 0;
signed char var_19 = (signed char)9;
unsigned int var_20 = 1667254975U;
unsigned char var_21 = (unsigned char)178;
long long int var_22 = 5808990714821158796LL;
unsigned int var_23 = 2703586964U;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)47084;
unsigned int arr_11 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3232347643U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
