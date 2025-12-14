#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27721;
int var_1 = 222670707;
unsigned short var_3 = (unsigned short)44520;
unsigned char var_5 = (unsigned char)195;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 5324227842405157914ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 2091535069;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
