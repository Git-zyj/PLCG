#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)50679;
short var_14 = (short)15353;
int zero = 0;
unsigned short var_18 = (unsigned short)27717;
int var_19 = 1285162004;
void init() {
}

void checksum() {
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
