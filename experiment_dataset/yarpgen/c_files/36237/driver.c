#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -709333584;
unsigned int var_8 = 1718868739U;
unsigned long long int var_9 = 11442913123047074868ULL;
int var_16 = 1033347742;
unsigned int var_17 = 772926825U;
int zero = 0;
unsigned long long int var_19 = 13168778910839722128ULL;
unsigned char var_20 = (unsigned char)156;
void init() {
}

void checksum() {
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
