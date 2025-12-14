#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-47;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)7;
unsigned short var_9 = (unsigned short)16838;
signed char var_15 = (signed char)-70;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 8089507394085016824ULL;
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
