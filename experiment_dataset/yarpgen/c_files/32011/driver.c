#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)239;
unsigned long long int var_9 = 8279498822952811677ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11897187940659557359ULL;
unsigned int var_14 = 3739329646U;
unsigned short var_15 = (unsigned short)47636;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
