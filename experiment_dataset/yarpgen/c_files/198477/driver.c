#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 572665638227959957ULL;
_Bool var_8 = (_Bool)0;
long long int var_12 = 5758190240636928741LL;
int zero = 0;
unsigned char var_13 = (unsigned char)136;
int var_14 = 866299937;
long long int var_15 = 8633564443688581713LL;
unsigned short var_16 = (unsigned short)45809;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
