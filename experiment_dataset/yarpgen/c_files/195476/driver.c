#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7462975123769261521LL;
unsigned long long int var_8 = 4363372618046871316ULL;
signed char var_11 = (signed char)-52;
int zero = 0;
unsigned short var_20 = (unsigned short)47039;
unsigned short var_21 = (unsigned short)39572;
signed char var_22 = (signed char)91;
signed char var_23 = (signed char)109;
signed char var_24 = (signed char)-49;
unsigned int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2299677398U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
