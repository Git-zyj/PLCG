#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4171665643066833400ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)26485;
long long int var_8 = 5769821495781821426LL;
unsigned char var_9 = (unsigned char)66;
unsigned short var_13 = (unsigned short)4235;
long long int var_15 = 5920251840681569048LL;
int zero = 0;
signed char var_16 = (signed char)95;
unsigned short var_17 = (unsigned short)22932;
short var_18 = (short)14014;
signed char var_19 = (signed char)108;
unsigned char arr_2 [20] ;
unsigned short arr_7 [20] [20] [20] ;
long long int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)26422;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -6377246118065135864LL : -4515103494673858424LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
