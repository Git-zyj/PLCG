#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-113;
long long int var_3 = -6952799400120303028LL;
int var_6 = -461009993;
unsigned int var_7 = 982308334U;
unsigned int var_8 = 6920686U;
int zero = 0;
long long int var_15 = -3906739340563585565LL;
unsigned int var_16 = 919826025U;
unsigned char var_17 = (unsigned char)174;
unsigned long long int var_18 = 14739914172996353709ULL;
unsigned long long int var_19 = 17923266014118567667ULL;
int var_20 = 480888391;
signed char var_21 = (signed char)49;
signed char arr_0 [22] ;
unsigned char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)215;
}

void checksum() {
    hash(&seed, var_15);
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
