#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)102;
unsigned long long int var_15 = 17000122627381736200ULL;
short var_18 = (short)32107;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)9495;
unsigned long long int var_21 = 5565688666174496606ULL;
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
