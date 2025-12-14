#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2463626456U;
long long int var_6 = 494419848740650882LL;
long long int var_7 = -8812995603663433055LL;
unsigned int var_8 = 4045448973U;
int zero = 0;
long long int var_10 = -6704666320629107141LL;
long long int var_11 = 3439090603136494834LL;
long long int var_12 = 525275738863748396LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
