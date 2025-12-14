#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2433445557U;
short var_9 = (short)21660;
unsigned int var_11 = 1872671707U;
int var_15 = 1982949687;
long long int var_18 = 4999103718672129682LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 5625503400188487082ULL;
unsigned long long int var_21 = 17126000178894889430ULL;
long long int var_22 = 3316763118224641709LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
