#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14746538966557416860ULL;
_Bool var_1 = (_Bool)1;
long long int var_12 = -9156907031720358464LL;
short var_14 = (short)32008;
int zero = 0;
short var_18 = (short)19273;
short var_19 = (short)18798;
int var_20 = -496824944;
unsigned long long int var_21 = 1106478322558032457ULL;
long long int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1876474356230468333LL;
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
