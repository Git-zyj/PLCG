#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3210827406U;
unsigned int var_15 = 3879965798U;
long long int var_18 = 5061428327718259107LL;
int zero = 0;
short var_20 = (short)-14621;
int var_21 = -1063368945;
unsigned long long int var_22 = 1011958038592687556ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
