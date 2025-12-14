#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -369709115;
unsigned long long int var_3 = 4540184165194543253ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1214727710110614284LL;
signed char var_7 = (signed char)40;
unsigned long long int var_9 = 7551885449582063151ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)186;
_Bool var_11 = (_Bool)1;
long long int var_12 = -6980741827908883418LL;
signed char var_13 = (signed char)25;
unsigned char var_14 = (unsigned char)6;
unsigned long long int arr_0 [18] ;
_Bool arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 5782008258555006334ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
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
