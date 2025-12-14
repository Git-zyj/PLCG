#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3984962995122810505LL;
unsigned char var_3 = (unsigned char)21;
unsigned long long int var_6 = 14858597586484004741ULL;
unsigned int var_9 = 3878669407U;
unsigned char var_11 = (unsigned char)82;
unsigned long long int var_13 = 17438176441894609376ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 14901084146524949983ULL;
unsigned int var_17 = 3813077156U;
unsigned char var_18 = (unsigned char)54;
unsigned int var_19 = 750070257U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
