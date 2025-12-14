#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26572;
unsigned short var_2 = (unsigned short)46550;
int var_3 = -453421181;
unsigned short var_4 = (unsigned short)47006;
unsigned short var_5 = (unsigned short)31130;
unsigned short var_10 = (unsigned short)53195;
long long int var_14 = -7869706784610828217LL;
int var_17 = 1751564250;
unsigned short var_18 = (unsigned short)12966;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-75;
unsigned int var_22 = 49547807U;
long long int var_23 = -2345567056260286117LL;
short var_24 = (short)-5813;
unsigned int var_25 = 3831893742U;
unsigned long long int var_26 = 14398216685009500447ULL;
long long int arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -6160730836774934811LL;
}

void checksum() {
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
