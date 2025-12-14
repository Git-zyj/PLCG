#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-23;
unsigned short var_4 = (unsigned short)49017;
int var_7 = 1219764641;
unsigned char var_8 = (unsigned char)231;
int zero = 0;
unsigned short var_11 = (unsigned short)17304;
int var_12 = 388787877;
long long int var_13 = 6632810709181672154LL;
long long int var_14 = 1118994263214042492LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1419006188U;
long long int var_17 = 2201443442410358986LL;
unsigned char arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)177;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
