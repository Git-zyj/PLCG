#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11217563220201350561ULL;
int var_9 = 238149417;
unsigned int var_11 = 1165011492U;
unsigned long long int var_14 = 11524598856962234320ULL;
unsigned int var_15 = 2432790234U;
int zero = 0;
short var_17 = (short)22059;
unsigned long long int var_18 = 14062730124112035253ULL;
unsigned short var_19 = (unsigned short)47799;
int var_20 = 1917962408;
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
