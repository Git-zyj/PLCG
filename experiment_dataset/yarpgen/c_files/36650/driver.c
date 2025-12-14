#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20409;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)40978;
unsigned short var_7 = (unsigned short)62336;
unsigned int var_8 = 1868396811U;
unsigned long long int var_9 = 1005358048978810707ULL;
signed char var_11 = (signed char)-25;
short var_12 = (short)-23529;
unsigned int var_13 = 2184826789U;
short var_15 = (short)-13915;
int zero = 0;
long long int var_18 = 4936870491223135072LL;
unsigned long long int var_19 = 12453381357368445158ULL;
short var_20 = (short)-24118;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
