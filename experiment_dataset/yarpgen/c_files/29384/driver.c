#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17497240770475616088ULL;
signed char var_10 = (signed char)39;
unsigned short var_14 = (unsigned short)8804;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-24106;
signed char var_20 = (signed char)-43;
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
