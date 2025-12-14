#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2295000785514348261ULL;
int var_5 = -796072778;
long long int var_6 = -445030629680667226LL;
long long int var_11 = 9014619185406584768LL;
long long int var_12 = -8327130620410704294LL;
int zero = 0;
unsigned long long int var_13 = 15014128206924660104ULL;
unsigned long long int var_14 = 7474548020074569788ULL;
unsigned long long int var_15 = 9855725838265063779ULL;
void init() {
}

void checksum() {
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
