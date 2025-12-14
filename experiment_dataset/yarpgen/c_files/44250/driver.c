#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1990978447522020824LL;
unsigned long long int var_3 = 14961044591579379532ULL;
int var_6 = -668189036;
_Bool var_8 = (_Bool)1;
int var_9 = 2082111108;
signed char var_10 = (signed char)-29;
unsigned short var_11 = (unsigned short)20832;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)11504;
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
