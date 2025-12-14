#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-57;
int var_2 = -1236151863;
unsigned char var_10 = (unsigned char)24;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)75;
long long int var_19 = 4993932753095416084LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
