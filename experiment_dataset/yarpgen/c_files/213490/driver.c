#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 782626550U;
long long int var_4 = -3202118620006100117LL;
unsigned char var_5 = (unsigned char)77;
long long int var_12 = 8379746352802492683LL;
unsigned char var_13 = (unsigned char)133;
unsigned short var_15 = (unsigned short)57207;
int zero = 0;
unsigned int var_16 = 819405570U;
unsigned long long int var_17 = 2161399455165255914ULL;
signed char var_18 = (signed char)-21;
int var_19 = -340124787;
unsigned long long int var_20 = 15022410844909420194ULL;
unsigned char arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)84;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
