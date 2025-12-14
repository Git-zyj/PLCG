#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1799521481;
unsigned long long int var_2 = 868750420078967509ULL;
unsigned long long int var_3 = 8611872463600200950ULL;
long long int var_4 = 5321258688612798479LL;
unsigned int var_9 = 1361288562U;
short var_10 = (short)-16780;
unsigned short var_11 = (unsigned short)35081;
int zero = 0;
int var_12 = -1779353589;
short var_13 = (short)-18700;
int var_14 = -686211167;
int var_15 = -1793598653;
long long int arr_1 [17] ;
short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -4612546919750891740LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-7874 : (short)-21092;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
