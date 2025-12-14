#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5796;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)177;
long long int var_8 = -2121757803944899180LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 1016251289U;
short var_12 = (short)26419;
unsigned int var_13 = 3933036122U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
