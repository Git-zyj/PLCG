#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
_Bool var_1 = (_Bool)0;
int var_2 = 2043479745;
signed char var_3 = (signed char)-33;
signed char var_4 = (signed char)76;
short var_7 = (short)-23524;
signed char var_8 = (signed char)21;
unsigned long long int var_10 = 14642437919971702399ULL;
unsigned int var_13 = 1156789997U;
int zero = 0;
unsigned char var_14 = (unsigned char)207;
unsigned int var_15 = 3966733052U;
void init() {
}

void checksum() {
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
