#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57057;
unsigned long long int var_3 = 3900607866228741187ULL;
unsigned long long int var_7 = 13017935863000312897ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)46257;
short var_15 = (short)1031;
int var_16 = -724004529;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
