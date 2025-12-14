#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -8061761913909887902LL;
unsigned short var_10 = (unsigned short)41346;
unsigned short var_11 = (unsigned short)39018;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -6808658573984431498LL;
unsigned long long int var_14 = 12854158478730582943ULL;
void init() {
}

void checksum() {
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
