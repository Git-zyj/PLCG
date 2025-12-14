#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)4058;
signed char var_13 = (signed char)78;
unsigned int var_14 = 3270874265U;
int zero = 0;
unsigned long long int var_18 = 12258112828343990194ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 16795518759735077862ULL;
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
