#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-84;
long long int var_6 = 3139240725542791836LL;
unsigned long long int var_8 = 10526502766129960923ULL;
int var_9 = 829357373;
int zero = 0;
unsigned int var_10 = 3193045164U;
short var_11 = (short)26202;
signed char var_12 = (signed char)-55;
unsigned char var_13 = (unsigned char)110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
