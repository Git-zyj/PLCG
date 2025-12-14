#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6673681954066345649ULL;
unsigned long long int var_1 = 16719563646449890140ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
signed char var_7 = (signed char)-112;
signed char var_8 = (signed char)-117;
unsigned long long int var_9 = 10120051249160251172ULL;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
unsigned short var_13 = (unsigned short)36558;
unsigned int var_14 = 1082000212U;
unsigned int var_15 = 3190863663U;
int var_16 = 519300546;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
