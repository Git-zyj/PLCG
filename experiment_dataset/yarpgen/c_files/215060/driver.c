#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19931;
unsigned int var_1 = 4282879475U;
unsigned int var_2 = 2958440535U;
unsigned int var_3 = 1072853647U;
unsigned int var_12 = 1679273896U;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)51;
unsigned int var_21 = 165958256U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
