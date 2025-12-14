#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3237420835831721984LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)33973;
int var_5 = -1086716316;
unsigned long long int var_9 = 10961814352298453603ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 4011064774U;
long long int var_21 = 2742302308497895585LL;
short var_22 = (short)20926;
unsigned short var_23 = (unsigned short)40929;
long long int var_24 = 5708610784151936605LL;
int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -1832833251;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
