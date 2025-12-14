#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)26;
unsigned long long int var_5 = 8161493112193733194ULL;
int var_6 = -901805261;
unsigned long long int var_9 = 3744622111932268165ULL;
signed char var_10 = (signed char)-105;
int zero = 0;
short var_12 = (short)13432;
unsigned int var_13 = 2625324375U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
