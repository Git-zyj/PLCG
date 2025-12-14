#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3322941222U;
signed char var_15 = (signed char)26;
int zero = 0;
unsigned short var_20 = (unsigned short)25468;
short var_21 = (short)19746;
long long int var_22 = 3547348261439567760LL;
int var_23 = 1725481077;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
