#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-100;
unsigned long long int var_3 = 856208435856254102ULL;
unsigned int var_5 = 1807091703U;
short var_8 = (short)-25550;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
int var_12 = 194197714;
unsigned long long int var_13 = 3133814714643061396ULL;
long long int var_14 = 8996834117629512129LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
