#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -402765290;
unsigned short var_3 = (unsigned short)44334;
unsigned int var_8 = 2781537128U;
unsigned short var_11 = (unsigned short)5886;
unsigned short var_13 = (unsigned short)32367;
int zero = 0;
short var_14 = (short)22444;
unsigned int var_15 = 2462403663U;
unsigned short var_16 = (unsigned short)18899;
unsigned short var_17 = (unsigned short)13083;
signed char var_18 = (signed char)36;
long long int arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -3360186214303751967LL;
}

void checksum() {
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
