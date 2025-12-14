#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28228;
long long int var_1 = -7661946892340911257LL;
short var_2 = (short)-24820;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 835928395U;
long long int var_6 = 8648381470038118546LL;
unsigned long long int var_7 = 10336488962546917619ULL;
signed char var_8 = (signed char)78;
short var_9 = (short)-15541;
unsigned int var_10 = 2714989292U;
int zero = 0;
unsigned int var_11 = 1521011029U;
long long int var_12 = -1453224256333493167LL;
unsigned char var_13 = (unsigned char)66;
short var_14 = (short)12127;
signed char var_15 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
