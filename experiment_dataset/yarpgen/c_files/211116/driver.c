#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 364942894U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2773980107U;
int zero = 0;
short var_14 = (short)-11101;
unsigned long long int var_15 = 2153812871457748775ULL;
long long int var_16 = 7870363292289060939LL;
void init() {
}

void checksum() {
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
