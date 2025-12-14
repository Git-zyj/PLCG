#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 361974578;
unsigned long long int var_2 = 17286355505463079916ULL;
unsigned int var_7 = 4180629354U;
unsigned int var_13 = 4098804924U;
signed char var_15 = (signed char)-4;
int zero = 0;
unsigned char var_17 = (unsigned char)107;
short var_18 = (short)4046;
_Bool var_19 = (_Bool)1;
long long int var_20 = -167463454400352528LL;
void init() {
}

void checksum() {
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
