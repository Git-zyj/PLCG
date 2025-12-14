#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1808808118675722512LL;
signed char var_3 = (signed char)110;
int var_7 = 1596605209;
int var_9 = 1725886060;
int var_11 = -1264808749;
int zero = 0;
int var_13 = 1795679623;
signed char var_14 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
