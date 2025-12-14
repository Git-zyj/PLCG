#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27392;
unsigned long long int var_6 = 9063030932823174436ULL;
unsigned char var_11 = (unsigned char)159;
unsigned int var_12 = 4248783234U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2276647975U;
unsigned short var_19 = (unsigned short)44169;
void init() {
}

void checksum() {
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
