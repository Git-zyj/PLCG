#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9706707589133262032ULL;
signed char var_7 = (signed char)26;
unsigned long long int var_16 = 2448590715053641333ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)121;
unsigned short var_20 = (unsigned short)34466;
unsigned short var_21 = (unsigned short)34112;
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
