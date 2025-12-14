#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 20949424U;
short var_4 = (short)-29742;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 82186643U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3335249661U;
int zero = 0;
unsigned short var_10 = (unsigned short)23402;
unsigned long long int var_11 = 1039288563070141122ULL;
int var_12 = 1882752114;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
