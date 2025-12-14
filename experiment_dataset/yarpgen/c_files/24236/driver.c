#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-58;
int var_2 = 1578970115;
unsigned short var_3 = (unsigned short)28429;
signed char var_4 = (signed char)67;
long long int var_5 = 762875707352600767LL;
unsigned char var_7 = (unsigned char)106;
unsigned char var_9 = (unsigned char)109;
long long int var_11 = 1758027733429309713LL;
signed char var_13 = (signed char)-99;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)224;
long long int var_20 = 3664187413216017292LL;
unsigned short var_21 = (unsigned short)745;
int arr_1 [10] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -666780478 : -1714407287;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)24799 : (short)-31732;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
