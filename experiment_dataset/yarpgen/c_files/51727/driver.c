#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_8 = (unsigned char)214;
unsigned short var_9 = (unsigned short)12495;
unsigned long long int var_10 = 4747946267881884492ULL;
short var_14 = (short)23588;
short var_17 = (short)-5178;
int zero = 0;
long long int var_18 = -2934967076374577742LL;
long long int var_19 = 6652412308724913874LL;
unsigned short var_20 = (unsigned short)13325;
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
