#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1265740150;
long long int var_6 = 4859701634543775265LL;
long long int var_10 = 3714679293517542014LL;
int zero = 0;
signed char var_17 = (signed char)82;
long long int var_18 = 7597313360262392554LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
