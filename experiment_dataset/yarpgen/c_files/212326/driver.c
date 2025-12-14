#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12357748099479816799ULL;
unsigned int var_8 = 2222163718U;
int var_9 = -1494107214;
int zero = 0;
unsigned long long int var_11 = 6582253652049386086ULL;
unsigned short var_12 = (unsigned short)22194;
unsigned short var_13 = (unsigned short)1617;
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
