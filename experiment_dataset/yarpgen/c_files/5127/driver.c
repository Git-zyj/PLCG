#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)51;
signed char var_8 = (signed char)-124;
int var_11 = 583952123;
int zero = 0;
int var_15 = 154128936;
unsigned long long int var_16 = 14173069234287156347ULL;
int var_17 = 182765487;
signed char var_18 = (signed char)-57;
unsigned long long int var_19 = 12724478598045937848ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
