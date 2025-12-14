#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4136364818U;
int var_1 = 40880097;
int var_2 = 522364903;
signed char var_8 = (signed char)-51;
signed char var_11 = (signed char)82;
unsigned long long int var_12 = 218805523135928715ULL;
int var_13 = -1593222371;
int zero = 0;
unsigned long long int var_14 = 2020451094149094950ULL;
unsigned int var_15 = 2027176166U;
signed char var_16 = (signed char)87;
unsigned char var_17 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
