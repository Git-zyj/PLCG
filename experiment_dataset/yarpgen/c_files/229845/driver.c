#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11740;
unsigned int var_4 = 3812818206U;
unsigned short var_7 = (unsigned short)3149;
unsigned long long int var_14 = 10602897438354347194ULL;
int var_17 = -1958165015;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8093071856859343642LL;
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
