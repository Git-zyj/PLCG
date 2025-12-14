#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6759024839228503861LL;
unsigned int var_1 = 2794804596U;
long long int var_9 = 4884554984468069406LL;
unsigned char var_11 = (unsigned char)172;
int zero = 0;
unsigned int var_18 = 384821691U;
short var_19 = (short)-9034;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
