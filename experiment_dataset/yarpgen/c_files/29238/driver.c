#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23443;
unsigned int var_4 = 2156987645U;
unsigned int var_6 = 2308673484U;
_Bool var_7 = (_Bool)1;
short var_9 = (short)8721;
int var_14 = 1222861121;
unsigned long long int var_17 = 15379835240117527850ULL;
int zero = 0;
long long int var_19 = 5840990768277629895LL;
short var_20 = (short)-29695;
long long int var_21 = 6751922920133360219LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
