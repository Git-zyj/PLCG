#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3160;
unsigned long long int var_6 = 3721471607634088633ULL;
int var_9 = -1890682392;
short var_10 = (short)-6554;
int zero = 0;
unsigned long long int var_12 = 3350603448948537678ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)37945;
long long int var_15 = 4675615880638237554LL;
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
