#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17569110522269115041ULL;
unsigned long long int var_3 = 18315738559647694505ULL;
unsigned char var_9 = (unsigned char)155;
unsigned long long int var_13 = 9592957280239472602ULL;
int var_14 = 1360977909;
int var_18 = -819534064;
int zero = 0;
unsigned char var_20 = (unsigned char)204;
unsigned char var_21 = (unsigned char)180;
unsigned char var_22 = (unsigned char)203;
short var_23 = (short)1446;
_Bool arr_0 [25] ;
long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 8925438590269439582LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
