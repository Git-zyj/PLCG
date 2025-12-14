#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1444850366;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_7 = (short)7404;
signed char var_8 = (signed char)46;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_12 = 4407301087104776260LL;
long long int var_13 = -2591489565423169588LL;
unsigned int var_14 = 1522723778U;
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
