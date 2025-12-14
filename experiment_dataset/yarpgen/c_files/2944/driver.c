#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1942779043;
_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)-57;
unsigned char var_6 = (unsigned char)114;
unsigned short var_7 = (unsigned short)38924;
unsigned char var_9 = (unsigned char)61;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-47;
short var_14 = (short)-31357;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
