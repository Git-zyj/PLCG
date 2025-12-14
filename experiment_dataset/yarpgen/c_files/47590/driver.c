#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = 939012740985260115LL;
int var_6 = -318356388;
int var_8 = -1432267658;
unsigned long long int var_9 = 16877281432281413769ULL;
int zero = 0;
unsigned int var_12 = 1260992514U;
unsigned long long int var_13 = 18245220584943812066ULL;
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
