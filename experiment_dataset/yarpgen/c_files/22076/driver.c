#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3228723458U;
unsigned int var_7 = 1060736981U;
int var_11 = 571726655;
short var_12 = (short)-30159;
short var_13 = (short)24056;
int zero = 0;
unsigned int var_14 = 3672290675U;
unsigned short var_15 = (unsigned short)49846;
signed char var_16 = (signed char)-109;
unsigned char var_17 = (unsigned char)83;
unsigned int var_18 = 2650122694U;
long long int var_19 = 8809672100028383548LL;
unsigned long long int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 4519342325396747053ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
