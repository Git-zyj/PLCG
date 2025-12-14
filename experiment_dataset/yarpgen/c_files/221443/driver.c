#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3129041206U;
unsigned int var_3 = 2599172176U;
long long int var_7 = 898416129873230452LL;
unsigned int var_9 = 4216961973U;
long long int var_15 = 937154771120947213LL;
long long int var_17 = 1063427476692148731LL;
long long int var_18 = 4142562697652179784LL;
int zero = 0;
unsigned int var_19 = 729043319U;
long long int var_20 = 5279363997301272527LL;
void init() {
}

void checksum() {
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
