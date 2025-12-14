#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)154;
long long int var_14 = 9120602034102177890LL;
int zero = 0;
long long int var_18 = 8462200621121034545LL;
unsigned short var_19 = (unsigned short)30231;
unsigned char var_20 = (unsigned char)9;
short var_21 = (short)21277;
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
