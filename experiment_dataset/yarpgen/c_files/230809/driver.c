#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1826490130900715374LL;
int var_8 = 727942891;
unsigned long long int var_9 = 3763847467348031155ULL;
_Bool var_10 = (_Bool)1;
int var_11 = 155803853;
int zero = 0;
short var_14 = (short)-26984;
signed char var_15 = (signed char)-124;
void init() {
}

void checksum() {
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
