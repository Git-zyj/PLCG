#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1890856062;
unsigned long long int var_2 = 2428249026948730240ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2003549351U;
unsigned int var_7 = 1779684968U;
unsigned int var_8 = 1594813377U;
short var_9 = (short)-10432;
int zero = 0;
unsigned long long int var_10 = 15026656800058365803ULL;
int var_11 = -2054141950;
int var_12 = -603465152;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
