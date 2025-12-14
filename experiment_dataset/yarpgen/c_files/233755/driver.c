#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3969899503312600803ULL;
signed char var_8 = (signed char)-66;
int zero = 0;
unsigned int var_10 = 2587995767U;
short var_11 = (short)-10031;
signed char var_12 = (signed char)-8;
unsigned long long int var_13 = 5485140747024579583ULL;
int var_14 = 648982619;
unsigned int var_15 = 1080197191U;
unsigned short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)59466;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
