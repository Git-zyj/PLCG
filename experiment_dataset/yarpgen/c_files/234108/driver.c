#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6832010839603738904LL;
unsigned long long int var_7 = 6548360933357007236ULL;
signed char var_10 = (signed char)65;
unsigned char var_14 = (unsigned char)193;
int zero = 0;
unsigned long long int var_18 = 4629463411796669218ULL;
short var_19 = (short)20379;
short var_20 = (short)-5688;
unsigned long long int var_21 = 14506816162680079301ULL;
long long int arr_0 [21] ;
_Bool arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -18370693551649752LL : -2095291885784211898LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
