#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7125683421178901069LL;
unsigned short var_5 = (unsigned short)7717;
short var_9 = (short)-6306;
signed char var_16 = (signed char)-19;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 897323896864013471LL;
unsigned long long int var_20 = 12691709804613008225ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
