#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19441;
unsigned short var_3 = (unsigned short)54511;
int var_4 = 1893422861;
_Bool var_8 = (_Bool)1;
long long int var_10 = -4014699854343521168LL;
int var_14 = -574217006;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)103;
int var_18 = -1257256093;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
