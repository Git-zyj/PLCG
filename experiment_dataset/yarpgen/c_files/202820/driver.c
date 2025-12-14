#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11562153574760619897ULL;
short var_5 = (short)16223;
signed char var_6 = (signed char)78;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 921736760683720108ULL;
signed char var_16 = (signed char)-81;
int zero = 0;
unsigned char var_18 = (unsigned char)14;
unsigned long long int var_19 = 808853533335905492ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
