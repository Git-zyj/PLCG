#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)10858;
short var_9 = (short)26524;
long long int var_10 = 4899782152231230887LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 17538691197291742746ULL;
unsigned int var_19 = 3633189702U;
long long int var_20 = 1120188173041094659LL;
int var_21 = 35752705;
unsigned int var_22 = 2793652456U;
unsigned char var_23 = (unsigned char)133;
_Bool arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
