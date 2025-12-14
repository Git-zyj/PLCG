#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)128;
unsigned long long int var_9 = 16323783778686152750ULL;
signed char var_14 = (signed char)-71;
int zero = 0;
unsigned char var_15 = (unsigned char)110;
unsigned short var_16 = (unsigned short)19989;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
