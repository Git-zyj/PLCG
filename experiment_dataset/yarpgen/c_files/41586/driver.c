#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8227255251459629936LL;
unsigned char var_7 = (unsigned char)22;
unsigned short var_10 = (unsigned short)46675;
signed char var_12 = (signed char)-21;
unsigned int var_15 = 1654133745U;
int zero = 0;
int var_16 = 1244125752;
signed char var_17 = (signed char)33;
unsigned int var_18 = 3480747620U;
short var_19 = (short)19973;
unsigned int var_20 = 197305276U;
long long int var_21 = 7026264284631049961LL;
unsigned short arr_0 [25] ;
unsigned long long int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)55019;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 16542398655504187591ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
