#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1406393313;
signed char var_2 = (signed char)70;
unsigned int var_4 = 3154260963U;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)53063;
unsigned long long int var_10 = 4319393317503438256ULL;
int zero = 0;
unsigned long long int var_11 = 15976635107714620101ULL;
unsigned int var_12 = 519696689U;
unsigned char var_13 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
