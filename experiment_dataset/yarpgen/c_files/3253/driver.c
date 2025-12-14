#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31089;
signed char var_8 = (signed char)89;
unsigned char var_12 = (unsigned char)255;
int var_13 = -501832623;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_20 = -498827612;
unsigned long long int var_21 = 1317320387432401022ULL;
void init() {
}

void checksum() {
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
