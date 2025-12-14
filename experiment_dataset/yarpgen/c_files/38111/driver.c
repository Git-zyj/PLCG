#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4209805333U;
unsigned short var_3 = (unsigned short)43755;
short var_7 = (short)13505;
long long int var_9 = 8556786765927368948LL;
signed char var_11 = (signed char)-70;
int zero = 0;
unsigned short var_12 = (unsigned short)15994;
unsigned int var_13 = 1443777448U;
signed char var_14 = (signed char)-115;
int var_15 = 1257778084;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
