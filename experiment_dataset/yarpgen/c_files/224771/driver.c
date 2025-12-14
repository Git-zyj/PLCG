#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
unsigned int var_2 = 3350053543U;
unsigned long long int var_4 = 10722621363783766584ULL;
unsigned long long int var_6 = 17629818221528545319ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 11422941854222883227ULL;
unsigned int var_10 = 3071400343U;
int zero = 0;
unsigned int var_11 = 678612638U;
signed char var_12 = (signed char)17;
unsigned char var_13 = (unsigned char)108;
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
