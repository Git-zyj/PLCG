#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6625994781094861357ULL;
long long int var_1 = 3426332560979087816LL;
unsigned int var_2 = 2340155269U;
int var_3 = -591926873;
unsigned short var_4 = (unsigned short)26957;
short var_9 = (short)18078;
short var_10 = (short)-15976;
unsigned short var_11 = (unsigned short)55629;
unsigned char var_12 = (unsigned char)209;
signed char var_13 = (signed char)98;
long long int var_14 = -6188366479388078338LL;
unsigned long long int var_15 = 9237865370366768372ULL;
long long int var_18 = 3232640328277095411LL;
unsigned int var_19 = 2515538696U;
int zero = 0;
unsigned int var_20 = 1236573888U;
unsigned int var_21 = 2828612537U;
unsigned int var_22 = 2448223956U;
int var_23 = 1575850367;
unsigned long long int var_24 = 6414260683435817952ULL;
_Bool arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
