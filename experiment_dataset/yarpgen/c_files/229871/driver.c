#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15917337304931933739ULL;
signed char var_2 = (signed char)108;
unsigned int var_4 = 2808249220U;
unsigned long long int var_5 = 17729663083799143256ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -8758871974269895528LL;
long long int var_8 = -1147540342415875403LL;
long long int var_9 = 3224373039141561175LL;
int zero = 0;
unsigned short var_10 = (unsigned short)62402;
signed char var_11 = (signed char)-92;
signed char var_12 = (signed char)57;
short var_13 = (short)31673;
short var_14 = (short)23316;
long long int arr_0 [15] ;
unsigned short arr_1 [15] ;
unsigned short arr_2 [15] ;
unsigned short arr_3 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1386979753193236163LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55725 : (unsigned short)31663;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)4560;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)42294 : (unsigned short)59373;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
