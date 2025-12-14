#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
signed char var_1 = (signed char)73;
unsigned long long int var_2 = 15722049986279285156ULL;
unsigned long long int var_3 = 6145151538226662445ULL;
signed char var_4 = (signed char)51;
unsigned long long int var_5 = 3104794504815242413ULL;
unsigned short var_7 = (unsigned short)10632;
int var_9 = 1815139440;
int zero = 0;
signed char var_12 = (signed char)-14;
short var_13 = (short)14770;
signed char var_14 = (signed char)-96;
signed char var_15 = (signed char)9;
unsigned short var_16 = (unsigned short)44392;
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
