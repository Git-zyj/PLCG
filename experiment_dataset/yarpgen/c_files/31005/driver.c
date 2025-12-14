#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
long long int var_1 = 5800643126923866980LL;
int var_2 = 1169909770;
unsigned int var_5 = 2342642977U;
long long int var_9 = -6832160714652373797LL;
int var_10 = 2036656226;
short var_13 = (short)13134;
unsigned long long int var_14 = 4900687405267893930ULL;
int zero = 0;
long long int var_15 = 558567693223730885LL;
unsigned int var_16 = 3189813434U;
unsigned long long int var_17 = 13957841129575016828ULL;
unsigned short var_18 = (unsigned short)61998;
unsigned long long int var_19 = 7742223694738264221ULL;
_Bool arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
