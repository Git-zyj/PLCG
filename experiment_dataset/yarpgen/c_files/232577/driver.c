#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-49;
long long int var_5 = 1175696671000874217LL;
unsigned int var_7 = 4128403454U;
unsigned short var_8 = (unsigned short)39948;
unsigned int var_9 = 1258422723U;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1816118919U;
unsigned char var_14 = (unsigned char)145;
int zero = 0;
unsigned short var_15 = (unsigned short)44669;
unsigned int var_16 = 2991876396U;
int var_17 = 317904119;
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
