#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3689842546U;
unsigned int var_3 = 1424782270U;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_9 = 6632348634204132149LL;
int zero = 0;
short var_12 = (short)17654;
int var_13 = 1118212329;
short var_14 = (short)-14898;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
