#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
unsigned int var_1 = 1424991832U;
unsigned short var_2 = (unsigned short)38572;
unsigned short var_3 = (unsigned short)24705;
_Bool var_4 = (_Bool)1;
int var_5 = 1216684814;
long long int var_7 = -7130489502135695429LL;
unsigned char var_8 = (unsigned char)43;
short var_9 = (short)-19913;
long long int var_10 = -3869643749183843795LL;
long long int var_11 = 4380481229860557208LL;
unsigned char var_12 = (unsigned char)210;
unsigned short var_14 = (unsigned short)17524;
int zero = 0;
short var_16 = (short)30062;
unsigned short var_17 = (unsigned short)7723;
unsigned int var_18 = 3053118912U;
int var_19 = -665224164;
unsigned short var_20 = (unsigned short)29196;
long long int var_21 = 7404771794428273477LL;
unsigned short var_22 = (unsigned short)34193;
_Bool arr_1 [10] ;
unsigned char arr_3 [10] [10] ;
unsigned short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)44470;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
