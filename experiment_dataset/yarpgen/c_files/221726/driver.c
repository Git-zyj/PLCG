#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3875883767U;
short var_2 = (short)-10592;
unsigned long long int var_4 = 5473628236017947992ULL;
unsigned char var_5 = (unsigned char)7;
unsigned int var_7 = 3930018970U;
unsigned int var_8 = 1141956011U;
unsigned long long int var_9 = 10751341804931268352ULL;
int zero = 0;
unsigned int var_10 = 3727803450U;
short var_11 = (short)24437;
unsigned int var_12 = 3654709938U;
unsigned long long int var_13 = 2565925999379162912ULL;
signed char var_14 = (signed char)-61;
short var_15 = (short)29403;
short arr_0 [22] ;
unsigned int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)20672;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 326540452U;
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
