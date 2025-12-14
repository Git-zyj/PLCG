#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2411571806U;
_Bool var_3 = (_Bool)0;
short var_5 = (short)18870;
signed char var_7 = (signed char)92;
unsigned char var_9 = (unsigned char)151;
unsigned short var_14 = (unsigned short)32015;
int zero = 0;
unsigned char var_16 = (unsigned char)25;
signed char var_17 = (signed char)40;
short var_18 = (short)-27197;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
