#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_7 = 7071389164716501410LL;
unsigned long long int var_8 = 17010353161429143015ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)31612;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
