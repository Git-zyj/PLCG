#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
long long int var_3 = -8923318452328759688LL;
signed char var_4 = (signed char)-122;
signed char var_5 = (signed char)-8;
short var_6 = (short)-11162;
signed char var_7 = (signed char)5;
signed char var_8 = (signed char)-28;
unsigned int var_9 = 4116084512U;
unsigned short var_10 = (unsigned short)47674;
long long int var_11 = 7038089146547753179LL;
int zero = 0;
short var_12 = (short)-3583;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)(-127 - 1);
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
