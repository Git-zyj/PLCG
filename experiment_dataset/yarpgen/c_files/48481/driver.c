#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3557095899U;
unsigned int var_1 = 3450283986U;
short var_2 = (short)17859;
short var_4 = (short)11776;
short var_6 = (short)-24042;
short var_9 = (short)10082;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 532356134U;
unsigned short var_13 = (unsigned short)32720;
unsigned short var_14 = (unsigned short)63191;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
