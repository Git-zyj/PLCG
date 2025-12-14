#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1923660086485518034LL;
long long int var_2 = 6742118780591619494LL;
_Bool var_4 = (_Bool)1;
long long int var_8 = 275495494197742372LL;
unsigned short var_10 = (unsigned short)61726;
short var_15 = (short)4430;
int zero = 0;
unsigned short var_16 = (unsigned short)50595;
signed char var_17 = (signed char)38;
int var_18 = -1023038956;
unsigned short var_19 = (unsigned short)25279;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
