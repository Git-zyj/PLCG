#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-127;
unsigned long long int var_9 = 2016647792637371298ULL;
long long int var_10 = 4170281303856780959LL;
signed char var_11 = (signed char)-52;
long long int var_12 = -9058280349826538272LL;
unsigned long long int var_15 = 11259092114746521277ULL;
int zero = 0;
unsigned long long int var_19 = 15964046668881781509ULL;
signed char var_20 = (signed char)43;
long long int var_21 = -482784830515324241LL;
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
