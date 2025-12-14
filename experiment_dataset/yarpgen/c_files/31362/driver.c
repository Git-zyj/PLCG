#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
unsigned long long int var_2 = 10421495293741284662ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 11444358193048031233ULL;
short var_6 = (short)28928;
unsigned int var_7 = 2871867049U;
unsigned short var_8 = (unsigned short)32777;
int var_9 = 2050440534;
int zero = 0;
unsigned int var_12 = 2354809385U;
unsigned short var_13 = (unsigned short)29552;
unsigned char var_14 = (unsigned char)49;
unsigned short var_15 = (unsigned short)16419;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
