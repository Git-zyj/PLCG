#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
short var_1 = (short)25110;
int var_3 = 817992349;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 4227094135U;
int var_6 = 65373402;
unsigned int var_8 = 3370353109U;
int zero = 0;
int var_10 = 1887178149;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
