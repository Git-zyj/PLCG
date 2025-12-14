#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4831982274720603212ULL;
int var_6 = -1849512968;
short var_12 = (short)9505;
int var_13 = -127940659;
int zero = 0;
short var_14 = (short)15215;
unsigned int var_15 = 2299692964U;
int var_16 = -246751055;
void init() {
}

void checksum() {
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
