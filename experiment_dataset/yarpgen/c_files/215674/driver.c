#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11131530256712473875ULL;
int var_3 = 210711964;
unsigned short var_4 = (unsigned short)59131;
short var_5 = (short)-20876;
unsigned short var_7 = (unsigned short)47862;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)49;
int var_11 = 111780371;
unsigned long long int var_12 = 212099418389908062ULL;
signed char var_13 = (signed char)20;
int var_14 = 548278808;
unsigned long long int arr_0 [21] ;
_Bool arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1306881759542306949ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
