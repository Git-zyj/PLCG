#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6388672870107712958LL;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 4198013843U;
unsigned char var_9 = (unsigned char)191;
long long int var_12 = -7420399869077884833LL;
unsigned char var_13 = (unsigned char)173;
int zero = 0;
long long int var_15 = -3285951129986700048LL;
unsigned short var_16 = (unsigned short)50926;
long long int var_17 = -3711583071445962815LL;
_Bool var_18 = (_Bool)1;
int arr_1 [22] ;
_Bool arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1463319425;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
