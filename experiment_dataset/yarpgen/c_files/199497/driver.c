#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6595875491727520364ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1470545251U;
unsigned long long int var_3 = 10933134581876069162ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 2317732475247296783LL;
unsigned int var_7 = 1485604046U;
unsigned long long int var_8 = 1946906894853941467ULL;
_Bool var_9 = (_Bool)0;
int var_10 = -1191367163;
int zero = 0;
unsigned long long int var_11 = 4737690743189576016ULL;
unsigned long long int var_12 = 5765621051733528345ULL;
unsigned int var_13 = 3865340570U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
