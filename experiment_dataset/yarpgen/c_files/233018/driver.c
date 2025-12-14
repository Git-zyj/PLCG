#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17775257727851190927ULL;
unsigned int var_7 = 842219427U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)150;
int zero = 0;
unsigned short var_10 = (unsigned short)26165;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)30609;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
