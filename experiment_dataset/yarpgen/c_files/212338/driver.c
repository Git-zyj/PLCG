#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 69570694U;
long long int var_5 = 4640536181675781448LL;
signed char var_6 = (signed char)-62;
_Bool var_8 = (_Bool)1;
long long int var_9 = -2079991721223505414LL;
unsigned char var_12 = (unsigned char)62;
int zero = 0;
unsigned long long int var_17 = 17672242630869920503ULL;
unsigned int var_18 = 3273913473U;
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
