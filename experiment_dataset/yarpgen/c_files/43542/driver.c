#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29529;
int var_1 = -1981310306;
unsigned char var_4 = (unsigned char)63;
signed char var_5 = (signed char)-40;
unsigned long long int var_10 = 7041204056975803821ULL;
int zero = 0;
unsigned int var_11 = 4016054869U;
signed char var_12 = (signed char)64;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
