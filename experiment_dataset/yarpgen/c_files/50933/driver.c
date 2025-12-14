#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6511459288871938121ULL;
unsigned short var_4 = (unsigned short)57288;
signed char var_5 = (signed char)84;
short var_7 = (short)-7181;
unsigned char var_8 = (unsigned char)37;
_Bool var_9 = (_Bool)1;
int var_10 = 1314175276;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)29435;
int var_14 = -1413871059;
unsigned long long int var_15 = 16622409281007601608ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
