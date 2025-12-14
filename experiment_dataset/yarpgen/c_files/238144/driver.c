#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9151464125658713127LL;
unsigned long long int var_4 = 12118047649394955569ULL;
unsigned char var_6 = (unsigned char)211;
long long int var_7 = 4278298449280565014LL;
long long int var_14 = 7348404026230461759LL;
int zero = 0;
unsigned char var_19 = (unsigned char)207;
short var_20 = (short)13676;
_Bool var_21 = (_Bool)1;
long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -7900934151555215924LL;
}

void checksum() {
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
