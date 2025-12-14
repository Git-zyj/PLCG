#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-118;
int var_7 = 1510746726;
unsigned int var_8 = 2133085721U;
signed char var_13 = (signed char)5;
unsigned short var_18 = (unsigned short)35754;
int zero = 0;
long long int var_20 = 5579561482433099863LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -4436319877743187674LL;
signed char var_23 = (signed char)117;
int var_24 = -136511990;
int var_25 = -1470857898;
long long int arr_1 [20] ;
short arr_4 [20] [20] ;
unsigned short arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1059510608621657069LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)14941;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)49303;
}

void checksum() {
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
