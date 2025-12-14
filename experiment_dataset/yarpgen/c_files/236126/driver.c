#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8022607308942325206LL;
unsigned short var_7 = (unsigned short)55849;
unsigned long long int var_8 = 8652920128772870293ULL;
long long int var_9 = -8259523843660429912LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-72;
signed char var_14 = (signed char)-2;
signed char var_15 = (signed char)94;
unsigned short var_16 = (unsigned short)10643;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)63149;
unsigned long long int arr_0 [20] ;
unsigned int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3039057482283263548ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 2996316599U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
