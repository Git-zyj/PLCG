#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1300367176U;
short var_5 = (short)15770;
signed char var_9 = (signed char)-28;
int zero = 0;
unsigned short var_15 = (unsigned short)45;
signed char var_16 = (signed char)-16;
long long int var_17 = -8585843869701569913LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
