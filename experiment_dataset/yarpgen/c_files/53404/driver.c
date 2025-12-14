#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1883822994;
short var_2 = (short)28107;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 3117798549U;
int zero = 0;
unsigned int var_14 = 3700288087U;
unsigned short var_15 = (unsigned short)24834;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
