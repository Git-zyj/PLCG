#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13556;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 2252871414196449570ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -6681508730185750808LL;
void init() {
}

void checksum() {
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
