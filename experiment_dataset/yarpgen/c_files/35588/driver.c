#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45202;
signed char var_1 = (signed char)-41;
long long int var_2 = 1480066255185410385LL;
int var_3 = -1153309263;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-107;
unsigned short var_8 = (unsigned short)58407;
int zero = 0;
unsigned short var_14 = (unsigned short)35958;
unsigned char var_15 = (unsigned char)174;
long long int var_16 = -5310955178615335LL;
long long int var_17 = 1838041006384612889LL;
unsigned long long int var_18 = 17776650828564625963ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 10255914664068102920ULL;
int arr_1 [10] ;
signed char arr_2 [10] ;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1357494670;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)248;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
