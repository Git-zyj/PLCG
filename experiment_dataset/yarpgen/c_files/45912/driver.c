#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62428;
unsigned long long int var_4 = 13137044088114368167ULL;
_Bool var_6 = (_Bool)1;
short var_8 = (short)30757;
unsigned short var_9 = (unsigned short)43260;
unsigned int var_10 = 2623720111U;
int zero = 0;
unsigned int var_11 = 3041378637U;
short var_12 = (short)-3875;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
