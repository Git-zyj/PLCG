#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16350;
unsigned long long int var_3 = 5700030787778336498ULL;
long long int var_4 = -4182886164294435685LL;
long long int var_5 = -1127119977537551550LL;
unsigned long long int var_7 = 15666948493769858726ULL;
signed char var_9 = (signed char)-18;
unsigned long long int var_12 = 1756743583490830181ULL;
int zero = 0;
signed char var_13 = (signed char)68;
long long int var_14 = 6043526769507964484LL;
unsigned char var_15 = (unsigned char)156;
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
