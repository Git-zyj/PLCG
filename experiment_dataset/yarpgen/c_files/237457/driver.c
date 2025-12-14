#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-92;
long long int var_3 = 309757673182944136LL;
unsigned int var_5 = 1484874023U;
unsigned char var_7 = (unsigned char)55;
signed char var_9 = (signed char)-102;
int zero = 0;
unsigned long long int var_10 = 9370211144873426765ULL;
unsigned short var_11 = (unsigned short)60044;
short var_12 = (short)-31737;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
