#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
int var_1 = 1129722971;
short var_2 = (short)15993;
unsigned char var_3 = (unsigned char)202;
long long int var_4 = 9029090274025628648LL;
unsigned long long int var_6 = 4563026084833462678ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)230;
unsigned int var_12 = 1502484507U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
