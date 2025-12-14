#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2689135479U;
unsigned int var_5 = 2792610325U;
unsigned int var_7 = 1825623234U;
unsigned int var_9 = 2751414162U;
int var_12 = 594973748;
unsigned int var_14 = 3516017647U;
int var_15 = -1948341104;
unsigned char var_18 = (unsigned char)91;
int zero = 0;
int var_19 = 336661518;
int var_20 = -1189728246;
unsigned int var_21 = 1691968790U;
unsigned int var_22 = 11865989U;
unsigned int var_23 = 590867283U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
