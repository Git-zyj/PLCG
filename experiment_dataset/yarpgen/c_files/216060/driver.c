#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1159480588U;
unsigned short var_1 = (unsigned short)57203;
unsigned int var_2 = 1574805052U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 4238010709U;
short var_7 = (short)-28370;
unsigned int var_9 = 706789547U;
unsigned int var_10 = 1046684742U;
unsigned int var_11 = 2042428707U;
int zero = 0;
unsigned short var_12 = (unsigned short)27583;
unsigned short var_13 = (unsigned short)7516;
short var_14 = (short)10145;
signed char var_15 = (signed char)-15;
int var_16 = -1382846469;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
