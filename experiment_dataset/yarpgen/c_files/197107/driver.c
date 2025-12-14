#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19768;
unsigned short var_1 = (unsigned short)58767;
short var_3 = (short)-4737;
unsigned char var_5 = (unsigned char)46;
long long int var_7 = 8164425292407917449LL;
signed char var_8 = (signed char)16;
short var_9 = (short)31529;
signed char var_10 = (signed char)-105;
int zero = 0;
unsigned long long int var_11 = 7876300011589655792ULL;
int var_12 = 1746673039;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)57;
unsigned long long int var_15 = 624806563507936865ULL;
signed char var_16 = (signed char)80;
unsigned char var_17 = (unsigned char)204;
unsigned short var_18 = (unsigned short)13057;
int arr_0 [14] [14] ;
int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -442742000;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 658317278;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
