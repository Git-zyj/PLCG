#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)60;
short var_2 = (short)32197;
unsigned int var_6 = 368002735U;
signed char var_10 = (signed char)64;
int zero = 0;
signed char var_13 = (signed char)-13;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8953747501550053267ULL;
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
