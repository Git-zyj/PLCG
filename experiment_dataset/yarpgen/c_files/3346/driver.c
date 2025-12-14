#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)182;
long long int var_13 = 2863442541437246197LL;
unsigned long long int var_14 = 11464727540100449449ULL;
unsigned long long int var_15 = 12572397519438546660ULL;
long long int var_16 = -3748081736579577752LL;
int zero = 0;
long long int var_19 = 8567880301621262809LL;
long long int var_20 = -3826531813601553427LL;
int var_21 = 1352303073;
void init() {
}

void checksum() {
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
