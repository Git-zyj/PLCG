#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4767504791253140472LL;
signed char var_2 = (signed char)-76;
unsigned short var_3 = (unsigned short)61975;
_Bool var_4 = (_Bool)0;
unsigned int var_9 = 1347348245U;
signed char var_10 = (signed char)-83;
int zero = 0;
unsigned short var_13 = (unsigned short)47610;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)98;
signed char var_16 = (signed char)64;
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
