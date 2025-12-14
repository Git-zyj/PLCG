#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14747000204090202792ULL;
long long int var_6 = -6691739782949013181LL;
short var_7 = (short)-31725;
long long int var_8 = 7851609864530684874LL;
unsigned short var_9 = (unsigned short)14591;
long long int var_10 = -3532376639653119685LL;
signed char var_11 = (signed char)99;
unsigned short var_14 = (unsigned short)21919;
unsigned long long int var_15 = 16454584960107070812ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 669319337;
unsigned short var_20 = (unsigned short)23930;
long long int var_21 = -4055676277626976097LL;
_Bool arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
