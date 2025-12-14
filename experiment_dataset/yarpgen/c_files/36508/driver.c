#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1019159411;
int var_8 = 1575839250;
int var_9 = -393309760;
int var_10 = 1103138700;
unsigned char var_11 = (unsigned char)15;
int var_14 = 2076153218;
int zero = 0;
long long int var_18 = 614187136118904389LL;
unsigned char var_19 = (unsigned char)72;
int var_20 = 881600712;
long long int var_21 = 3392131598763562870LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
