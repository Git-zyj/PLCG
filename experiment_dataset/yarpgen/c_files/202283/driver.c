#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6959312610222293373LL;
long long int var_2 = 4823933297248768844LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 14049374214931910784ULL;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)124;
unsigned short var_13 = (unsigned short)36131;
void init() {
}

void checksum() {
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
