#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)18384;
_Bool var_8 = (_Bool)1;
int var_9 = -1524003005;
int zero = 0;
int var_11 = -342777616;
unsigned int var_12 = 2067290850U;
unsigned char var_13 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
