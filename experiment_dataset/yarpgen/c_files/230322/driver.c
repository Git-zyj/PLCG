#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3148982107U;
signed char var_7 = (signed char)-37;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)17;
int zero = 0;
signed char var_17 = (signed char)51;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 277968941U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
