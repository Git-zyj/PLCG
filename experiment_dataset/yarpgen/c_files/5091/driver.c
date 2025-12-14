#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26450;
long long int var_8 = -926713337818784144LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-125;
unsigned char var_17 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
