#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
long long int var_2 = -305741644939804107LL;
unsigned long long int var_5 = 11373202040951349013ULL;
unsigned short var_8 = (unsigned short)4384;
long long int var_9 = 7627110549838899817LL;
int zero = 0;
short var_10 = (short)-12794;
unsigned short var_11 = (unsigned short)24247;
long long int var_12 = -6072186569403216742LL;
long long int var_13 = -3940868232299485820LL;
signed char var_14 = (signed char)65;
unsigned int var_15 = 752356638U;
short arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)29374;
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
