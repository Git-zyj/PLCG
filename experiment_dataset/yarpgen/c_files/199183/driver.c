#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -913617553;
unsigned long long int var_2 = 13512467340089474008ULL;
int var_5 = 321682034;
unsigned short var_7 = (unsigned short)59253;
unsigned short var_9 = (unsigned short)43525;
unsigned long long int var_14 = 1808770325705232879ULL;
_Bool var_15 = (_Bool)1;
int var_17 = 1425893547;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 7986541305011335763ULL;
unsigned long long int var_20 = 2880896320130290691ULL;
unsigned long long int var_21 = 18253649482030849950ULL;
_Bool var_22 = (_Bool)1;
int var_23 = -727026073;
unsigned long long int var_24 = 9268454329290697810ULL;
unsigned long long int var_25 = 15335646296715266349ULL;
unsigned short arr_0 [10] ;
int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17524 : (unsigned short)47608;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -723294653;
}

void checksum() {
    hash(&seed, var_18);
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
