#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3305530034512555505ULL;
unsigned long long int var_2 = 2525599033867664934ULL;
_Bool var_3 = (_Bool)1;
int var_6 = -675768314;
unsigned short var_9 = (unsigned short)34906;
int zero = 0;
unsigned char var_10 = (unsigned char)57;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
