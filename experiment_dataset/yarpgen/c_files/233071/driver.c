#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3674850470U;
int var_4 = 802303622;
short var_7 = (short)21299;
_Bool var_8 = (_Bool)1;
short var_9 = (short)18417;
short var_15 = (short)18031;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 2675840933591621532ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)80;
short var_20 = (short)12997;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)55881;
short var_23 = (short)-4671;
long long int var_24 = 40088606909162506LL;
unsigned short var_25 = (unsigned short)31123;
unsigned int arr_0 [10] ;
short arr_1 [10] ;
long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 378061668U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-4263;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 3648335044172954978LL;
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
