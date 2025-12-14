#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-2151;
int var_7 = 1933548800;
unsigned short var_8 = (unsigned short)46131;
signed char var_9 = (signed char)29;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-108;
int zero = 0;
unsigned short var_15 = (unsigned short)13994;
short var_16 = (short)-25106;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
