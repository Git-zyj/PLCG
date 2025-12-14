#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5413993990220068517LL;
_Bool var_3 = (_Bool)0;
long long int var_5 = -610291906707652447LL;
short var_7 = (short)23085;
int var_8 = 1270039085;
long long int var_9 = 7867701651881333845LL;
unsigned short var_10 = (unsigned short)63620;
signed char var_11 = (signed char)-102;
int zero = 0;
short var_13 = (short)-3765;
int var_14 = -1749811463;
long long int var_15 = -761108586697097281LL;
int var_16 = 2090540819;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)146;
unsigned char var_19 = (unsigned char)178;
signed char arr_1 [25] ;
unsigned char arr_3 [25] ;
long long int arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1894347469475915291LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
