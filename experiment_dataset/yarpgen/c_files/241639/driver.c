#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
unsigned short var_2 = (unsigned short)7553;
int var_6 = -1688981499;
long long int var_12 = 6253864598105531672LL;
unsigned short var_13 = (unsigned short)19932;
long long int var_17 = -183333272460081041LL;
int zero = 0;
unsigned short var_19 = (unsigned short)15149;
unsigned int var_20 = 4187387343U;
unsigned int var_21 = 1293253978U;
unsigned long long int var_22 = 10108660180977743723ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
