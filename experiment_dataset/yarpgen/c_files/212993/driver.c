#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
unsigned short var_3 = (unsigned short)63029;
unsigned long long int var_5 = 6932021891500231740ULL;
unsigned short var_10 = (unsigned short)5088;
unsigned long long int var_11 = 6727711972798510887ULL;
unsigned char var_12 = (unsigned char)199;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)167;
unsigned int var_21 = 3796228992U;
signed char var_22 = (signed char)-127;
short var_23 = (short)-19315;
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
