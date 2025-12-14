#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
unsigned char var_1 = (unsigned char)34;
unsigned long long int var_4 = 940846094428245335ULL;
short var_7 = (short)7381;
int zero = 0;
unsigned char var_15 = (unsigned char)30;
unsigned int var_16 = 4228195742U;
unsigned long long int var_17 = 7186594923116138169ULL;
unsigned int var_18 = 849894014U;
long long int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3545973318012832689LL;
}

void checksum() {
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
