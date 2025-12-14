#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22078;
unsigned int var_2 = 2609068535U;
int var_7 = 1884819134;
unsigned char var_10 = (unsigned char)20;
signed char var_12 = (signed char)-106;
int zero = 0;
int var_15 = 1070134309;
_Bool var_16 = (_Bool)1;
int var_17 = -1013684803;
int var_18 = -1141827606;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
