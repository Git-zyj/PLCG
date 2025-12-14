#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13914096565392763315ULL;
unsigned long long int var_5 = 2555354101380293987ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 14896735332637923242ULL;
int zero = 0;
unsigned long long int var_13 = 14189576187678322935ULL;
unsigned long long int var_14 = 11382891524239829208ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
