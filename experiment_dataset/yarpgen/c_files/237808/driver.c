#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)-14720;
unsigned long long int var_6 = 17061203746522043793ULL;
unsigned long long int var_9 = 138171105066004472ULL;
unsigned char var_10 = (unsigned char)184;
short var_12 = (short)24322;
int zero = 0;
signed char var_14 = (signed char)0;
int var_15 = -1349885353;
unsigned short var_16 = (unsigned short)47788;
void init() {
}

void checksum() {
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
