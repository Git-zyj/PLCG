#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29352;
unsigned int var_7 = 1766943038U;
unsigned long long int var_11 = 4004793097019631478ULL;
int zero = 0;
unsigned long long int var_16 = 17074806801044582895ULL;
signed char var_17 = (signed char)-105;
void init() {
}

void checksum() {
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
