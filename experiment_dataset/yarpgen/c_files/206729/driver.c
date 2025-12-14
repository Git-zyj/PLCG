#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
short var_1 = (short)-23984;
short var_5 = (short)21458;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-10983;
unsigned long long int var_11 = 2155312423528207966ULL;
int var_17 = -701014154;
int zero = 0;
unsigned short var_18 = (unsigned short)22722;
unsigned char var_19 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
