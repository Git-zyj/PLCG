#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14194911479774314632ULL;
long long int var_4 = 6935469896596858851LL;
long long int var_5 = 5742816994560628168LL;
long long int var_6 = -1031840677366830024LL;
short var_9 = (short)7821;
unsigned int var_11 = 2465636929U;
int zero = 0;
unsigned char var_12 = (unsigned char)241;
long long int var_13 = -5760041643527775326LL;
long long int var_14 = 4069680324708757433LL;
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
