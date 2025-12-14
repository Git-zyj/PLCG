#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8520141257169007543LL;
unsigned long long int var_7 = 8057764727983777320ULL;
short var_8 = (short)31288;
unsigned short var_10 = (unsigned short)27600;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 12727256U;
unsigned short var_17 = (unsigned short)56199;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
