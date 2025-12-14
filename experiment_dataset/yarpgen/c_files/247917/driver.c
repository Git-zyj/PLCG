#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10345987792798652081ULL;
unsigned int var_7 = 2427171409U;
unsigned short var_12 = (unsigned short)17008;
int zero = 0;
unsigned long long int var_13 = 10999572481923584938ULL;
long long int var_14 = 1124573119395584974LL;
long long int var_15 = 5961305052318862445LL;
unsigned short var_16 = (unsigned short)27429;
long long int var_17 = 1730342372151560567LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
