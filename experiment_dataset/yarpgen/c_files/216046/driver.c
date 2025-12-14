#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 742143540140757646LL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-32708;
int var_14 = -376620978;
unsigned char var_17 = (unsigned char)80;
int zero = 0;
unsigned char var_18 = (unsigned char)17;
long long int var_19 = -9077972594992453692LL;
int var_20 = -697423923;
long long int var_21 = -215698113419427786LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
