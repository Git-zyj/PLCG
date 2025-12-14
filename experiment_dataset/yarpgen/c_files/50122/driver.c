#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
unsigned short var_5 = (unsigned short)42591;
unsigned char var_6 = (unsigned char)23;
long long int var_7 = 7541214424700630607LL;
unsigned short var_8 = (unsigned short)61979;
unsigned char var_10 = (unsigned char)151;
long long int var_12 = -5690689786644629684LL;
int zero = 0;
int var_15 = -160973735;
unsigned int var_16 = 3608824956U;
short var_17 = (short)-3184;
long long int var_18 = 6925828709563277753LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
