#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22073;
unsigned long long int var_3 = 4120448912225027784ULL;
unsigned int var_4 = 1376869539U;
short var_5 = (short)-28206;
unsigned long long int var_7 = 13699155275913351220ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)-20238;
unsigned long long int var_16 = 11823449440607527941ULL;
short var_17 = (short)4650;
unsigned short var_18 = (unsigned short)55075;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
