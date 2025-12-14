#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3952867356U;
unsigned char var_2 = (unsigned char)169;
signed char var_3 = (signed char)88;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 11903045035407668846ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)59631;
short var_12 = (short)31947;
int zero = 0;
unsigned short var_15 = (unsigned short)44999;
unsigned int var_16 = 1239372635U;
long long int var_17 = 8132849216809654614LL;
unsigned short var_18 = (unsigned short)10571;
long long int var_19 = -7045394022617174518LL;
unsigned int var_20 = 2918462371U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)57118;
unsigned short var_23 = (unsigned short)28020;
short var_24 = (short)-4085;
_Bool var_25 = (_Bool)0;
int var_26 = -135032042;
short arr_0 [19] [19] ;
short arr_2 [25] ;
unsigned short arr_3 [25] ;
short arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-4653;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)6428;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)46938;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)25755;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
