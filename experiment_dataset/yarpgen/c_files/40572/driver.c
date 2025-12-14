#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-1;
unsigned short var_2 = (unsigned short)16726;
unsigned short var_3 = (unsigned short)27437;
int var_4 = 1655924283;
int var_5 = 222729716;
unsigned long long int var_7 = 1320073245916895786ULL;
signed char var_8 = (signed char)-87;
int zero = 0;
unsigned long long int var_10 = 4126092850390035244ULL;
unsigned long long int var_11 = 13923627327440828892ULL;
long long int var_12 = 717163973728565019LL;
long long int var_13 = 1911165260054010329LL;
long long int var_14 = -7205094987807493465LL;
unsigned int var_15 = 853623820U;
_Bool var_16 = (_Bool)1;
int arr_1 [22] ;
short arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1199848159;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)9644;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
