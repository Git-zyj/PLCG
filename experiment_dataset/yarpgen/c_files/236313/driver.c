#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)115;
unsigned short var_3 = (unsigned short)53790;
short var_17 = (short)-11043;
unsigned long long int var_18 = 1113127119092822837ULL;
int zero = 0;
long long int var_20 = -1981541278031271811LL;
unsigned int var_21 = 343578259U;
long long int var_22 = 4926682626575491845LL;
unsigned char var_23 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
