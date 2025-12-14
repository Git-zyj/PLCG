#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8807458280873156480ULL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-11078;
unsigned long long int var_9 = 7003690522439092022ULL;
short var_11 = (short)-26393;
int zero = 0;
unsigned char var_12 = (unsigned char)123;
unsigned int var_13 = 3886408663U;
short var_14 = (short)2185;
unsigned long long int var_15 = 8024744789339481496ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
