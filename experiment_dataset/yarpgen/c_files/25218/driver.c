#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61768;
long long int var_4 = -4266792898757336926LL;
long long int var_5 = 3154525385088350559LL;
int var_8 = -1540425307;
unsigned int var_11 = 367216340U;
short var_13 = (short)-15069;
signed char var_15 = (signed char)-93;
unsigned short var_16 = (unsigned short)11253;
int zero = 0;
unsigned short var_18 = (unsigned short)8299;
short var_19 = (short)-19885;
short var_20 = (short)13437;
unsigned char var_21 = (unsigned char)235;
unsigned int arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 575156985U;
}

void checksum() {
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
