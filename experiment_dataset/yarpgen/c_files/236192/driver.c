#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1136939393223161795LL;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3723529807U;
int zero = 0;
unsigned int var_20 = 713580843U;
unsigned short var_21 = (unsigned short)28154;
signed char var_22 = (signed char)110;
unsigned long long int var_23 = 8551047593168324537ULL;
void init() {
}

void checksum() {
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
