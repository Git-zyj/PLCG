#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1168081187;
signed char var_12 = (signed char)-101;
int var_14 = 1430187918;
unsigned short var_17 = (unsigned short)15686;
int zero = 0;
short var_18 = (short)3309;
int var_19 = -381665033;
int var_20 = -1743652259;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
