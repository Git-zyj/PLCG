#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 5964326088495632657ULL;
signed char var_8 = (signed char)100;
long long int var_11 = -3363955908581876037LL;
short var_13 = (short)-26976;
unsigned long long int var_16 = 16036100187873049902ULL;
int zero = 0;
int var_17 = -749570417;
int var_18 = -1486034699;
signed char var_19 = (signed char)40;
signed char var_20 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
