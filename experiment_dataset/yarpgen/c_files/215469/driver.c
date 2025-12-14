#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
unsigned int var_5 = 962731056U;
unsigned short var_9 = (unsigned short)5547;
unsigned char var_11 = (unsigned char)204;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3311496512U;
unsigned short var_15 = (unsigned short)16514;
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
