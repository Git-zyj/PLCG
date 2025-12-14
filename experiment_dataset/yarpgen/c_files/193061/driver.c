#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 525359652U;
long long int var_3 = -1222942067771393161LL;
short var_5 = (short)-24640;
long long int var_6 = -3288243493537826437LL;
short var_7 = (short)-15928;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)2;
int zero = 0;
unsigned int var_13 = 722070868U;
unsigned long long int var_14 = 10188382400563754652ULL;
signed char var_15 = (signed char)65;
unsigned long long int var_16 = 13606123968183048097ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
