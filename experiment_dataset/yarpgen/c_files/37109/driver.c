#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15534948313144753425ULL;
signed char var_7 = (signed char)61;
unsigned int var_8 = 3114225615U;
long long int var_18 = -4659525750952922029LL;
int zero = 0;
long long int var_20 = 8300055158607663123LL;
unsigned int var_21 = 2898427067U;
unsigned int var_22 = 3031555617U;
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
