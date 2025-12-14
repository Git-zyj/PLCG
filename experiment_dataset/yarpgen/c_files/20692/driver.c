#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7560554897596693214ULL;
short var_5 = (short)28025;
_Bool var_6 = (_Bool)0;
int var_7 = 1332968726;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)216;
unsigned int var_11 = 845193329U;
int zero = 0;
signed char var_13 = (signed char)94;
int var_14 = -1834138609;
signed char var_15 = (signed char)-69;
unsigned int var_16 = 4109244277U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
