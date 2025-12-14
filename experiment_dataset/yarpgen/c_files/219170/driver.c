#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1140;
int var_4 = 479760206;
unsigned long long int var_11 = 8163261384648763821ULL;
int zero = 0;
unsigned long long int var_19 = 9337808697879868629ULL;
int var_20 = 1336302433;
unsigned int var_21 = 2037627934U;
long long int var_22 = 3085897574431275748LL;
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
