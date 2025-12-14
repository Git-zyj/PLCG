#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12433;
unsigned short var_1 = (unsigned short)21509;
unsigned long long int var_5 = 15872880846015045446ULL;
unsigned char var_7 = (unsigned char)93;
int var_8 = -750270246;
unsigned short var_9 = (unsigned short)15715;
unsigned short var_14 = (unsigned short)30199;
short var_15 = (short)-26633;
int zero = 0;
unsigned long long int var_16 = 12395704647134741249ULL;
short var_17 = (short)-19678;
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
