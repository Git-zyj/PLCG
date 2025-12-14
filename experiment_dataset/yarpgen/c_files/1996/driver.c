#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)825;
short var_3 = (short)-32131;
int var_7 = -1471571500;
int var_8 = -1181285225;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 1132570276;
short var_12 = (short)-14228;
signed char var_13 = (signed char)-21;
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
