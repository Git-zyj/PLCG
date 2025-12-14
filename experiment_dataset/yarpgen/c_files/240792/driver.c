#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)213;
unsigned long long int var_5 = 3490946958219811888ULL;
int var_6 = 1077587011;
_Bool var_7 = (_Bool)0;
short var_12 = (short)-10140;
long long int var_15 = -4436421378019237745LL;
unsigned short var_17 = (unsigned short)25633;
int zero = 0;
unsigned int var_18 = 3326109836U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 38023929U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
