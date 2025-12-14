#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15609;
signed char var_5 = (signed char)-110;
signed char var_9 = (signed char)-78;
int zero = 0;
unsigned long long int var_12 = 10679364492065850746ULL;
short var_13 = (short)12949;
unsigned char var_14 = (unsigned char)217;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
