#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35970;
unsigned long long int var_2 = 7680615472603154881ULL;
_Bool var_8 = (_Bool)0;
int var_11 = -1262099582;
long long int var_13 = -220570970884134792LL;
int zero = 0;
short var_17 = (short)-3107;
signed char var_18 = (signed char)-65;
int var_19 = 697960079;
signed char var_20 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
