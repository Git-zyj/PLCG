#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -352492833;
signed char var_9 = (signed char)94;
unsigned long long int var_14 = 14863215850875711658ULL;
short var_16 = (short)-10779;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)9662;
short var_20 = (short)24337;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
