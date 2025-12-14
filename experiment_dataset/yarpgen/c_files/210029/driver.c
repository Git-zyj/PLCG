#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29115;
signed char var_11 = (signed char)-18;
int var_13 = 1605533868;
int zero = 0;
short var_15 = (short)-3104;
short var_16 = (short)-5902;
unsigned long long int var_17 = 2792163378957915506ULL;
signed char var_18 = (signed char)-1;
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
