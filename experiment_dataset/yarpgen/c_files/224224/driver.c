#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3264370261781304924ULL;
signed char var_3 = (signed char)85;
signed char var_9 = (signed char)-127;
unsigned long long int var_10 = 14172436801545558077ULL;
unsigned char var_11 = (unsigned char)0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-30168;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-30519;
unsigned short var_17 = (unsigned short)22773;
long long int var_18 = 3088011884929007328LL;
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
