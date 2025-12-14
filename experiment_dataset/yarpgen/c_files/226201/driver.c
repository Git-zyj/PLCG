#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)7353;
unsigned int var_5 = 1258441072U;
long long int var_11 = 1935379855039362766LL;
long long int var_12 = -8076145488944700437LL;
int var_17 = -440393160;
long long int var_18 = 3450741791967145835LL;
int zero = 0;
unsigned long long int var_20 = 960436421521341043ULL;
unsigned char var_21 = (unsigned char)122;
unsigned long long int var_22 = 154490457682873525ULL;
int var_23 = 82653149;
unsigned long long int var_24 = 983238542956916319ULL;
unsigned char arr_0 [22] ;
int arr_1 [22] ;
long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -1034450896;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 7823764028751024246LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
