#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16194582467566990076ULL;
unsigned int var_5 = 1091917961U;
unsigned int var_8 = 451116119U;
unsigned char var_10 = (unsigned char)108;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3846660371U;
int zero = 0;
long long int var_20 = -6758384675719307774LL;
signed char var_21 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
