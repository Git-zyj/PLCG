#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
signed char var_10 = (signed char)86;
int zero = 0;
long long int var_12 = -4588506750147290397LL;
unsigned char var_13 = (unsigned char)164;
long long int var_14 = -2446312996389225738LL;
long long int var_15 = 4943822075138461841LL;
unsigned short var_16 = (unsigned short)27501;
int var_17 = -1613724728;
unsigned long long int var_18 = 14982582509683496964ULL;
unsigned short arr_0 [10] ;
unsigned short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)23423;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)14683;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
