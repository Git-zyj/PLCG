#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5571;
unsigned long long int var_6 = 15127014882852426865ULL;
_Bool var_7 = (_Bool)1;
int var_12 = 1568881673;
unsigned long long int var_15 = 12039158325734051429ULL;
int zero = 0;
signed char var_16 = (signed char)-47;
unsigned char var_17 = (unsigned char)78;
unsigned char var_18 = (unsigned char)129;
unsigned long long int var_19 = 3140730870329152977ULL;
long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3824128065913797571LL;
}

void checksum() {
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
