#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2565052727U;
short var_1 = (short)21047;
short var_2 = (short)-11421;
short var_6 = (short)32168;
unsigned short var_8 = (unsigned short)10877;
short var_9 = (short)-18139;
long long int var_10 = -6764731122024782773LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 223432300410354582ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)5331;
_Bool var_16 = (_Bool)0;
int var_17 = -622071221;
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
